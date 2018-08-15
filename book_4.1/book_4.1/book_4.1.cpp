// book_4.1.cpp : Defines the entry point for the console application.
/* Ava Scherocman 
   Book Lab 4.1: Integer Datatypes
   8/14/18
*/

#include "stdafx.h"
#include <iostream>


int main()
{
	char exampleChar = 28 ;
	int exampleInt = -12274;
	unsigned int exampleUInt = 819;
	long exampleLong = 234113431;
	float exampleFloat = 2304293424;
	double exampleDouble = -2394238401834;

	std::cout << "This program demonstrates basic integer datatypes in C++. \n";
	system("Pause");
	std::cout << "Here's an example of a char. \n";
	std::cout << exampleChar << "\n";
	system("Pause");
	std::cout << "Here's an example of an int. \n";
	std::cout << exampleInt << "\n";
	system("Pause");
	std::cout << "Unsigned variables can only be set to zero and above. \n";
	std::cout << "Here's an example of an unsigned int.\n";
	std::cout << exampleUInt << "\n";
	system("Pause");
	std::cout << "Here's an example of a long.\n";
	std::cout << exampleLong << "\n";
	system("Pause");
	std::cout << "Here's an example of a float. \n";
	std::cout << exampleFloat << "\n";
	system("Pause");
	std::cout << "Here's an example of a double. \n";
	std::cout << exampleDouble << "\n";
	system("Pause");
	
	return 0;
}

