// book_5.1-9.cpp : Defines the entry point for the console application.
// Ava Scherocman
// Lab for Introduction to Computer Science Using C++ Book
// Chapter 5: Project 5.1-5.9
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	char runAgain;
	int choice = 0;
	do {
		std::cout << "1     Transportation \n" << "2     Ellipse \n" << "3     Degrees to Radians \n" <<
			"4     Speed \n" << "5     Finance \n" << "6     Electricity \n" << "7     Force \n" <<
			"8     Energy \n" << "9     Law Enforcement \n";

		std::cin >> choice;
		if (choice == 1) {
			
		}





		std::cout << "Run again? Enter Y for yes, N for no\n";
		std::cin >> runAgain;
		
	} while (runAgain == 1);

    return 0;
}

