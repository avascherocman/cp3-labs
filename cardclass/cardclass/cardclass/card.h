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
  std::string toStr(card c);
  std::string printCard(card c);
 


private:
  //data
  int value; //1 to 12
  int suit; //3 to 6 - hearts, diamonds, clubs, spades

};

std::string card::card() {           //random fill
  RandGen r;
  std::string rs = std::to_string(r.RandInt(1, mySides));
  return rs;
}

card::card(int v, int s) {
  value = v;
  suit = s;                      //fill
}

void card::setValue(int v) {
  value = v;
}

void card::setSuit(int s) {
  sides = s;
}

int card::getValue() {
  return v;
}

void card::getSuit() {
  return s;
}

std::string card::printCard(card c){
  std::string s;
                              // use ascii 3, 4, 5, 6 in visual studio to be able to output suits
  
  return s;  
}


#endif
