// phonelist.cpp : Defines the entry point for the console application.
/* 
  Ava Scherocman 
  Phone List Lab
  10/16/18
*/

      
#include "stdafx.h"    
#include <iostream> 
#include <iomanip>    
#include <fstream>   
#include <string>    
#include "randgen.h"
#include <stdlib.h>


struct person {                     //
  std::string firstName;           //
  std::string lastName;           //  declare struct "person" 
  std::string phoneNumber;       //  to be filled and outputted
  int age;                      //
};                             //

void addPeople(struct person * peopleArray); 

int main(){
  int numPeople = 100;
  person people[100];
 
    addPeople(people);
    std::cout << std::setw(12) << std::setiosflags(std::ios::left) << "Name"
      << std::setw(18) << std::setiosflags(std::ios::left) << " "
      <<"Age"<<std::setw(10) << std::setiosflags(std::ios::left) <<
      std::setw(10) << std::setiosflags(std::ios::left) <<"       Phone Number" << std::endl;
    for (int j = 0; j < numPeople; j++) {
      std::cout << std::setw(12) << std::setiosflags(std::ios::left) << people[j].firstName
        << std::setw(18) << std::setiosflags(std::ios::left) << people[j].lastName<<
        std::setw(10) << std::setiosflags(std::ios::left) << people[j].age <<
        std::setw(10) << std::setiosflags(std::ios::left) << people[j].phoneNumber << std::endl;

    }
    system("Pause");

    return 0;
}

void addPeople(struct person*peopleArray) {
  RandGen r;
  //add last names-----------------------------------------------------------
  std::string line;
  std::ifstream lastnames("LastNames.txt");
  if (lastnames.is_open()) {
    for (int i = 0; i < 100; i++) {
      int rnum = r.RandInt(1, 65536);
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
    for (int i = 0; i < 100; i++) {
      int gender = r.RandInt(1,2);
      //add female first names--------
      if (gender == 1) {
        std::ifstream femalenames("FemaleNamesDictionary.txt");
        if (femalenames.is_open()) {
          int rf= r.RandInt(1, 4725);
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
              int rm = r.RandInt(1, 1219);
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
 //generate random phone numbers-------------------
    for (int i = 0; i < 100; i++) {
      std::string phoneNum ="";  
      for (int j = 0; j < 10; j++) {
        phoneNum += std::to_string(r.RandInt(0, 9));
      }
      peopleArray[i].phoneNumber = phoneNum;
     }
    //generate random ages-------------------------
    for (int i = 0; i < 100; i++) {
      int age;
      age = r.RandReal(1,102);
      peopleArray[i].age = age;
    }
      
 
}