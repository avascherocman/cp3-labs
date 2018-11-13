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

  //functions
  void setValue(int v);
  int getValue();
  void setSuit(int s);
  char getSuit();
  std::string printCard(card &c);
  std::string toStrL();
  std::string toStr();
 


private:
  //data
  int value; //1 to 12
  int suit; //3 to 6 - hearts, diamonds, clubs, spades

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

std::string card::printCard(card & c){
  std::string s;
  s = " _____ \n|" + std::to_string(value) + "   " + std::to_string(value) + "|\n|  " + c.toStrL() + "  |\n|  " +c.toStrL()  + "  |\n|" +
    std::to_string(value) + "___" + std::to_string(value) + "|\n";
  return s;  
}

std::string card::toStrL() {
  std::string s;
  switch (suit) {
    case 3:
    s = "H";
    break;
  case 4:
    s = "D";
    break;
  case 5:
    s = "C";
    break;
  case 6:
    s = "S";
    break;
  }
  return s;
}

std::string card::toStr() {
  std::string s = std::to_string(value);
  switch (suit) {
  case 3:
    s += "H";
    break;
  case 4:
    s += "D";
    break;
  case 5:
    s += "C";
    break;
  case 6:
    s += "S";
    break;
  }
  return s;
}

#endif
