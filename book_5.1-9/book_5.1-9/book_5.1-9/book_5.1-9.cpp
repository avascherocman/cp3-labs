﻿// book_5.1-9.cpp : Defines the entry point for the console application.
/* Ava Scherocman 
   Book Lab 5.1-9 Projects
   9/14/18
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{	
	//set runAgain to "No" for now and choice to 0  so the user can choose
	char runAgain = 'N';
	int choice = 0;
	//loop while runAgain = yes
	do {
		//output user options and prompt user to enter choice
		std::cout << "1     Transportation \n" << "2     Ellipse \n" << "3     Degrees to Radians \n" <<
			"4     Speed \n" << "5     Finance \n" << "6     Electricity \n" << "7     Force \n" <<
			"8     Energy \n" << "9     Law Enforcement \n" << "Enter a menu number \n";

		//set choice to input from user
		std::cin >> choice;
		std::cout << std::endl;
		if (choice == 1) {
			int numPeople;
			int remPeople;
			//prompt user to enter number of people
			std::cout << "Enter total number of people: ";
			std::cin >> numPeople;
			//find remaining people using modulus operator (%)
			remPeople = numPeople % 50;
			//output number of people who remain
			std::cout << std::endl << "Number of people who need to be transported in vans:  "
			<< remPeople << std::endl << std::endl;
		}
		else if (choice == 2) {
			float rad1;
			float rad2;
			float area;
			const float pi = 3.14159265359;
			//prompt user to enter values of radii
			std::cout << "Enter value of radius 1: ";
			std::cin >> rad1;
			std::cout << std::endl << "Enter value of radius 2: ";
			std::cin >> rad2;
			//calculate area and output 
			area = (rad1*rad2*pi);
			std::cout << std::endl << "Area of Ellipse: " << area << std::endl;
		} else if (choice == 3) {
			float radians;
			float degrees;
			char convertChoice;
			const float rdRatio = 57.3;
			//prompt user to enter what type of conversion
			std::cout << "Convert radians or degrees? Type R for radians, D for degrees  ";
			std::cin >> convertChoice;
			if (convertChoice == 'R') {
				//prompt user to enter radians
				std::cout << std::endl << "Enter number of radians: ";
				std::cin >> radians;
				//convert radians to degrees and output
				degrees = radians * rdRatio;
				std::cout << std::endl << "Degrees:  " << degrees<<std::endl;
			} else if (convertChoice == 'D') {
				//prompt user to enter degrees
				std::cout << std::endl << "Enter number of degrees: ";
				std::cin >> degrees;
				//convert degrees to radians and output
				radians = degrees / rdRatio;
				std::cout << std::endl << "Radians:  " << radians<<std::endl;
			} else {
				std::cout << "Invalid input." << std::endl;
			}
		} else if (choice == 4) {
			float mph;
			float fps;
			float fph;
			const int feetMile = 5280;
			const int secHour = 3600;
			//prompt user to enter MPH
			std::cout << "Enter miles per hour:  ";
			std::cin >> mph;
			//calculate feet per second and output
			fph = mph * feetMile;
			fps = fph / secHour;
			std::cout << std::endl << "Feet per second:  " << fps << std::endl;
		} else if (choice == 5) {
			//prompt user to enter principal, interest rate, and period in years
			float interest;
			float principal;
			float years;
			float interestRate;
			std::cout << "Enter principal loan:  ";
			std::cin >> principal;
			std::cout << std::endl << "Enter interest rate per year:  ";
			std::cin >> interestRate;
			std::cout << std::endl << "Enter time in years:  ";
			std::cin >> years;
			//calculate simple interest and output
			interest = principal * interestRate * years;
			std::cout << std::endl << "Interest after " << years << " year(s): " << interest << std::endl;
		} else if (choice == 6) {
			//prompt user to enter resistance and voltage
			float resistance;
			float voltage;
			float current;
			std::cout << "Enter voltage (in volts):  ";
			std::cin >> voltage;
			std::cout << std::endl << "Enter resistance (in ohms):  ";
			std::cin >> resistance;
			//calculate current and output
			current = voltage / resistance;
			std::cout << std::endl << "Current: " << current << " amps" << std::endl;
		} else if (choice == 7) {
			//prompt user to enter mass and acceleration
			float massF;
			float force;
			float acceleration;
			std::cout << "Enter mass (in kg):  ";
			std::cin >> massF;
			std::cout << std::endl << "Enter acceleration (in m/s^2):  ";
			std::cin >> acceleration;
			//calculate force and output
			force = massF * acceleration;
			std::cout << std::endl << "Force: " << force << " Newton(s)" << std::endl;	
		} else if (choice == 8) {
			const double lightSpeed = 299792.458; //km per second
			//prompt user to enter mass
			float massE;
			float energy;
			std::cout << "Enter mass in kilograms:  ";
			std::cin >> massE;
			//calculate energy in joules and output
			energy = pow((massE*lightSpeed), 2);
			std::cout << std::endl << "Energy in Joules:  " << energy << std::endl;
		} else if (choice == 9) {
			//prompt user to enter base fine, additional fine, and speeding
			float baseFine;
			float addFine;
			float mphOver;
			float ticketFine;
			std::cout << "Enter base fine for a ticket:  ";
			std::cin >> baseFine;
			std::cout << std::endl << "Enter additional fine for each MPH over the speed limit:  ";
			std::cin >> addFine;
			std::cout << std::endl << "Enter MPH over the speed limit:  ";
			std::cin >> mphOver;
			//calculate ticket price, set output settings and output
			ticketFine = baseFine + (mphOver*addFine);
			std::cout << std::fixed << std::setprecision(2);
			std::cout << std::endl << "Ticket fine:  $" << ticketFine << std::endl;
		} else {
			std::cout << "Not a valid choice. \n";
			runAgain = 'Y';
		}




		std::cout << std::endl;
		std::cout << "Run again? Enter Y for yes, N for no\n";
		std::cin >> runAgain;
		
	} while (runAgain == 'Y');

	system("Pause");
    return 0;
}

