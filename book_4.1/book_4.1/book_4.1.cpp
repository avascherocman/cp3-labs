// book4-1.cpp : Defines the entry point for the console application.
/* Ava Scherocman 
   Book Lab 4.1: Integer Datatypes
   8/14/18
*/

#include "stdafx.h"
#include <iostream>


int main()
{
	//declare a constant for the square root of two
	const double sqrtTwo = 1.414214;

	int i; //declare i as an integer
	long j; //j as a long integer
	unsigned long k; //k as an unsigned long integer
	float n; //n as a floating point number
	i = 3; //initialize i to 3
	j = -2048111; // initialize j
	k = 4000000001; //initialize k
	n = 1.887; //initialize n

	//output constant and variables to sreen
	std::cout << sqrtTwo << std::endl;
	std::cout << i << '\n';
	std::cout << j << '\n';
	std::cout << k << '\n';
	std::cout << n << '\n';


	
	system("Pause");
	
	return 0;
}

