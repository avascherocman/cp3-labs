// phonelist.cpp : Defines the entry point for the console application.
//
#include <iomanip>
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

void addPerson(int &numPeople, person peopleArray);

struct person {
  std::string firstName;
  std::string lastName;
  float phoneNumber;
  int age;
};

int main(){
  int numPeople = 0;
  person people[100];
  
  for (numPeople = 0; numPeople < 100; numPeople++) {
    addPerson(numPeople, people);
  }
    return 0;
}

void addPerson(int &numPeople, person peopleArray) {
  
}