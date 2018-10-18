// phonelist.cpp : Defines the entry point for the console application.
/* 
  Ava Scherocman 
  Phone List Lab
  10/16/18
*/


#include <iomanip>       //
#include "stdafx.h"     //
#include <iostream>    //   compiler directives
#include <fstream>    //
#include <string>    //


struct person {                     //
  std::string firstName;           //
  std::string lastName;           // declare struct "person" 
  float phoneNumber;             // to be filled and outputted
  int age;                      //
};                             //

void addPeople(struct person * peopleArray); 

int main(){
  int numPeople = 100;
  person people[100];
 
    addPeople(people);
    for (int j = 0; j < numPeople; j++) {
      std::cout << people[j].firstName << +" " << people[j].lastName << std::endl;
    }
    system("Pause");

    return 0;
}

void addPeople(struct person * peopleArray) {
  //add last names-----------------------------------------------------------
  const int max = 65536;                        //
  const int min = 1;                           // declare min and max for last name generation
  const int range = (max - min) + 1;          //
  std::string line;
  std::ifstream lastnames("LastNames.txt");
  if (lastnames.is_open()) {
    for (int i = 0; i < 100; i++) {
      int rnum = (rand() % range) + min;
      for (int nlines = 0; nlines <= rnum; nlines++) {                        // generate random last name
        std::getline(lastnames, line);                                       // by looping through file until
        if (nlines == rnum && !line.empty()) {                              // a randomly generated number
          peopleArray[i].lastName = line;
          lastnames.seekg(0);
          break;
        }
     }
    }
    lastnames.close();
  }
  //add first names-----------------------------------------------------------
  const int fmax =4725;                       //
  const int fmin=1;                          //
  const int frange=(fmax-fmin)+1;           //constants for random number generation
  const int mmax = 1219;                   // based on number of names in files
  const int mmin = 1;                     //
  const int mrange = (mmax - mmin) + 1;  //

    for (int i = 0; i < 100; i++) {
      int gender = (rand() % 2) + 1;
      //add female first names--------
      if (gender == 1) {
        std::ifstream femalenames("FemaleNamesDictionary.txt");
        if (femalenames.is_open()) {
          int rf = (rand() % frange) + fmin;
          for (int nlines = 0; nlines <= rf; nlines++) {
            std::getline(femalenames, line);
            if (nlines == rf && !line.empty()) {
              peopleArray[i].firstName = line;
              femalenames.seekg(0);
              break;
            }
          }
        }
        femalenames.close();
      }
      //add male first names-----------------------------------------------------------
      else if (gender == 2) {
            std::ifstream malenames("MaleNamesDictionary.txt");
            if (malenames.is_open()) {
              int rm = (rand() % mrange) + mmin;
              for (int nlines = 0; nlines <= rm; nlines++) {
                std::getline(malenames, line);
                if (nlines == rm && !line.empty()) {
                  peopleArray[i].firstName = line;
                  malenames.seekg(0);
                  break;
                }
              }
            malenames.close();
          }
        }
      }
  

}