// book_9-3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

//function prototypes
void outputMenu();
int addItems(char item);
void cancelOrder();
void totalOrder(int & subtotal);


int main()
{

  //declare variables
  int choice = 1;
  

  do {
    char userChoice = 'A';
    int subtotal = 0;
    
    while (userChoice != 'X' && userChoice != 'T') {
      outputMenu();
      std::cin >> userChoice;
      if (userChoice == 'T') {
        break;
      }
      if (userChoice == 'X') {
        break;
      }
      subtotal += addItems(userChoice);
     
    }
        if (userChoice = 'T') {
          totalOrder(subtotal);
       }
        if (userChoice == 'X') {
          cancelOrder();
        } 

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
  for (int i = 0; i < 5; i++) {
    if (menu[i] == item) {
      itemPrice = price[i];
    }
  }
  return itemPrice;
}

void totalOrder(int &subtotal) {
  std::cout << std::endl << "Subtotal:   " << subtotal << std::endl;
  system("Pause");
}

void cancelOrder() {

}