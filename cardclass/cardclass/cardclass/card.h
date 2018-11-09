#pragma once
#ifndef card_h
#define card_h
#include "randgen.h"
#include <string>

class card {
public:
  //constructors
  card(); //default
  card(int sides); //fill
  card(const card &d2);  //copy

  //functions
  void setValue(int v);
  int getValue();
  void setSuit(int s);
  int getSuit();
  std::string toStr(int r);


private:
  //data
  int value; //1 to 12
  int suit; //3 to 6 - hearts, diamonds, clubs, spades

};

std::string card::card() {             //random fill
  RandGen r;
  std::string rs = std::to_string(r.RandInt(1, mySides));
  return rs;
}

card::card(int s, int v) {
  mySides = sides;                //fill
}

void card::setNumSides(int ns) {
  card::mySides = ns;
}

int card::getNumSides() {
  return mySides;
}



#endif
