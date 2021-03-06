﻿// book_9-3.cpp : Defines the entry point for the console application.
/* Ava Scherocman 
   Book Lab 9.3: Snack Bar
   10/01/18
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>

//function prototypes
void outputMenu();
int addItems(char item);
void cancelOrder(int & subtotal);
void totalOrder(int & subtotal);


int main()
{

  //declare variables
  int choice = 1;
  

  do {
    char userChoice = 'A';
    int subtotal = 0;
    
    //loop while user choice is not exit or total
    while (userChoice != 'X' && userChoice != 'T') {
      outputMenu();
      std::cin >> userChoice;
      //otherwise, break
      if (userChoice == 'T') {
        break;
      }
      if (userChoice == 'X') {
        break;
      }
      subtotal += addItems(userChoice);
     
    }
    //if these are true, call total or cancel functions
        if (userChoice = 'T') {
          totalOrder(subtotal);
       }
        if (userChoice == 'X') {
          cancelOrder(subtotal);
          break;
        } 

      //run again loop
    std::cout << "\nEnter 0 to quit, 1 to run again.\n";
    std::cin >> choice;
  } while (choice == 1);
  return 0;
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

int addItems(char item) {
  int itemPrice;
  char menu[] = { 'S','C','P','B','R','L' };
  int price[] = { 2,1,1,3,3,4 };
  for (int i = 0; i < 6; i++) {
    if (menu[i] == item) {
      itemPrice = price[i];
    }
  }
  return itemPrice;
}

void totalOrder(int &subtotal) {

  std::cout << std::setw(20) << std::setfill(' ') << std::setiosflags('left') <<
    std::fixed << std::setprecision(2)
    << "Subtotal: " << std::resetiosflags('left') << subtotal << std::endl;
  const float taxRate = .06;
  float tax = subtotal * taxRate;
  std::cout << std::setw(20) << std::setfill(' ') << std::setiosflags('left') <<
    std::fixed << std::setprecision(4)
    << "Tax: " << std::resetiosflags('left') << tax << std::endl;
  float total = subtotal + tax;
  std::cout << std::setw(20) << std::setfill(' ') << std::setiosflags('left') <<
    std::fixed << std::setprecision(4)
    << "Total: " << std::resetiosflags('left') << total << std::endl;
  system("Pause");
}

void cancelOrder(int & subtotal) {
  subtotal = 0;

}
