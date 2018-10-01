// book_9-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

//function prototypes
void outputMenu();
int addItems();
int cancelOrder();
int totalOrder();

//declare variables
int choice = 1;
char menuChoice;
int total = 0;

int main()
{
  do {   
    //do {
      outputMenu();

    //} while (menuChoice != 'X');
    std::cout<< "\nEnter 0 to quit, 1 to run again.\n";
    std::cin >> choice;
  } while (choice == 1);
}

void outputMenu() {
  std::cout <<
    //menu option formatting + name
    std::setw(30) << std::setfill(' ') << std::setiosflags('left') <<
    "S Sandwich" <<
    //menu option formatting + price
    std::resetiosflags('left') <<
    "$2 \n" <<
    //new menu option
    std::setw(30) << std::setfill(' ') << std::setiosflags('left') <<
    "C Chips" <<
    std::resetiosflags('left') <<
    "$1 \n" <<
    //new menu option
    std::setw(30) << std::setfill(' ') << std::setiosflags('left') <<
    "P Pickle" <<
    std::resetiosflags('left') <<
    "$1 \n" <<
    //new menu option
    std::setw(30) << std::setfill(' ') << std::setiosflags('left') <<
    "B Brownie" <<
    std::resetiosflags('left') <<
    "$3 \n" <<
    //new menu option
    std::setw(30) << std::setfill(' ') << std::setiosflags('left') <<
    "R Regular Drink" <<
    std::resetiosflags('left') <<
    "$3 \n" <<
    //new menu option
    std::setw(30) << std::setfill(' ') << std::setiosflags('left') <<
    "L Large Drink" <<
    std::resetiosflags('left') <<
    "$4 \n" <<
    //non priced menu options
    "X Cancel sale\n" <<
    "T Total sale\n";
}

int addItems() {
  std::cin >> menuChoice;
  if (menuChoice == 'S') {
    
  }
  else if (menuChoice == 'C') {

  }
  else if (menuChoice == 'P') {

  }
  else if (menuChoice == 'B') {

  }
  else if (menuChoice == 'R') {

  }
  else if (menuChoice == 'L') {

  }
  else if (menuChoice == 'X') {

  }
  else if (menuChoice == 'T') {

  }
  else {
    std::cout << "Error: please enter an item on the list";
  }
  return 0;
}