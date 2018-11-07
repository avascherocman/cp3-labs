#pragma once
#ifndef die_h
#define die_h
#endif
#include "randgen.h"
#include <string>

class die {
public:
  //constructors
  die(); //default
  die(int sides); //fill
  die(const die &d2);  //copy

  //functions
  void setNumSides(int ns);
  int getNumSides();
  std::string roll();

  RandGen r;

private:
  //data
  int mySides;
  
};

die::die() {
  mySides = 6;          //default
}

die::die(int sides){
  mySides = sides;          //fill
}

die::die(const die &d2) {
  mySides = d2.mySides;    //copy
}


void die::setNumSides(int ns) {
  die::mySides = ns;
}

int die::getNumSides() {
  return mySides;
}

std::string die::roll() {
  int newRoll =  r.RandInt(1, mySides);
  std::string rs = "Roll: " + newRoll.std::to_string();

}