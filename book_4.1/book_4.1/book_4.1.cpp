// book_4.1.cpp : Defines the entry point for the console application.
/* Ava Scherocman 
   Book Lab 4.1: Integer Datatypes
   8/14/18
*/

#include "stdafx.h"
#include <iostream>


int main()
{	
	std::cout << "This program demonstrates use of integer datatypes in C++ \n";
	int exampleInt = -2401;
	std::cout << "The datatype int only uses one byte of memory.\n";
	std::cout << exampleInt;
	unsigned int exampleUInt = 243;
	std::cout << "Unsigned datatypes cannot go below zero.\n";
	std::cout << exampleUInt;
	
	return 0;
}

