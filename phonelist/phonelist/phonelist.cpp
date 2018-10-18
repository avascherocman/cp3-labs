// phonelist.cpp : Defines the entry point for the console application.
/* 
  Ava Scherocman 
  Phone List Lab
  10/16/18
*/

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

void addPeople(struct person * peopleArray);

int main(){
  int numPeople = 0;
  person people[100];
 
    addPeople(people);
    //std::cout << people[numPeople].lastName << std::endl;
    return 0;
}

void addPeople(struct person * peopleArray) {
  //add last names-----------------------------------------------------------
  const int max = 65536;
  const int min = 1;
  const int range = (max - min) + 1;
  std::string line;
  std::ifstream lastnames("LastNames.txt");
  if (lastnames.is_open()) {
    for (int i = 0; i < 100; i++) {
      int rnum = (rand() % range) + min;
      for (int nlines = 0; nlines <= rnum; nlines++) {
        std::getline(lastnames, line);
        if (nlines == rnum && !line.empty()) {
          peopleArray[i].lastName = line;
          std::cout << peopleArray[i].lastName <<"   "<<i<< std::endl;
          lastnames.seekg(0);
          break;
        }
     }
    }
    lastnames.close();
  }
  system("Pause");

}