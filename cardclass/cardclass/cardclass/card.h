#pragma once
#ifndef card_h
#define card_h
#include "randgen.h"
#include <string>

class card {
public:
  //constructors
  card(); //default
  card(int v, int s); //fill
  card(const card &d2);  //copy

  //functions
  void setValue(int v);
  int getValue();
  void setSuit(int s);
  char getSuit();
  std::string printCard();
 


private:
  //data
  int value; //1 to 12
  char suit; //3 to 6 - hearts, diamonds, clubs, spades

};

card::card() {           //random fill
  RandGen r;
  suit = r.RandInt(3, 6);
  value = r.RandInt(1, 12);

}

card::card(int v, int s) {
  value = v;
  suit = s;                      //fill
}

void card::setValue(int v) {
  value = v;
}

void card::setSuit(int s) {
  suit = s;
}

int card::getValue() {
  return value;
}

char card::getSuit() {
  return suit;
}

std::string card::printCard(){
  std::string s;
  s = " _____ \n|" + std::to_string(value) + "   " + std::to_string(value) + "|\n|  " + suit + "  |\n|  " + suit + "  |\n|" + 
    std::to_string(value) + "___" + std::to_string(value) + "|\n";
    // use ascii 3, 4, 5, 6 in visual studio to be able to output suits
  return s;  
}


#endif
