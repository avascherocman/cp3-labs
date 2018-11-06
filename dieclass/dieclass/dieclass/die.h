#pragma once
#ifndef die_h
#define die_h
#endif
#include "randgen.h"

class die {
public:
  //constructors
  die(); //default
  die(int sides); //fill
  *die(die d);  //copy

  //functions
  void setNumSides();
  int getNumSides();
  std::string toStr();
  int roll();

private:
  //data
  int mySides;
  
};

die::die() {
  mySides = 6;          //default
}

die::die(int sides) {
  mySides = sides;                //fill
}

die::die(die d) {
  setNumSides(mySides);       //copy
}

std::string die::toStr() {
  std::string strdie;
  strdie = "Roll " + roll(d).toString;
}

void setNumSides(int ns) {
  die::mySides = ns;
}

int getNumSides() {
  die::return mySides;
}

int roll(die d) {
  int newRoll =  RandGen::RandInt(1, die::mySides);
  return newRoll;
}