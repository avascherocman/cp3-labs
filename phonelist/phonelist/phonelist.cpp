// phonelist.cpp : Defines the entry point for the console application.
//
#include <iomanip>
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>


struct person {
  std::string firstName;
  std::string lastName;
  float phoneNumber;
  int age;
};

void addPerson(int &numPeople, struct person * peopleArray);

int main(){
  int numPeople = 0;
  person people[100];
 
  for (numPeople = 0; numPeople < 100; numPeople++) {
    addPerson(numPeople, people);
  }
    return 0;
}

void addPerson(int &numPeople, struct person * peopleArray) {
  //add last names-----------------------------------------------------------
  std::string line;
  std::ifstream lastnames("LastNames.txt");
    if (lastnames.is_open()) {
      for (int i = 0; i<100;i++){
       const int max = 1219;
        const int min = 1;
        const int range = (max - min) + 1;
        int rnum = (rand() % range) + min;

      }
 }
    lastnames.close();
}