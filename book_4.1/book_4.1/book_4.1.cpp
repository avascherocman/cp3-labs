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
	int w = 100; //initialize w
	long x = 1000; //initialize x
	long y = -40000; //initialize y
	long z = 40000; //initialize z
	const int e = 2.7182818; //set e, speed of light, speed of sound
	const float lightSpeed = 300000000;
	const float soundSpeed = 340.292; 




	//output constant and variables to sreen
	std::cout << sqrtTwo << std::endl;
	std::cout << i << '\n';
	std::cout << j << '\n';
	std::cout << k << '\n';
	std::cout << n << '\n';

	std::cout << w << '\n';
	std::cout << x << '\n';
	std::cout << y << '\n';
	std::cout << z << '\n';
	
	std::cout << e << '\n';
	std::cout << lightSpeed << '\n';
	std::cout << soundSpeed << '\n';
	

	
	system("Pause");
	
	return 0;
}

