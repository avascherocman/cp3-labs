﻿// zellers.cpp : Defines the entry point for the console application.
/* Ava Scherocman 
   Zellers Lab
   8/17/18
*/

#include "stdafx.h"
#include <iostream>


int main()
{
	//prompt user for day and get
	float k;
	std::cout << "Enter day of the month\n";
	std::cin >> k;

	//prompt user for month, get, and change to zellers months
	float m;
	std::cout << "Enter month \n";
	std::cin >> m;
	if (m == 3 || m == 4 || m == 5 || m == 6 || m == 7 || m == 8 || m == 9 || m == 10 || m == 11 || m == 12) {
		m = m - 2;
	} else if (m == 1) {
		m = 11;
	} else if (m==2){
		m = 12;
	}

	//prompt user for year and change to two variables
	float c; //last two digits of the year
	float d; //century
	float year;
	std::cout << "Enter year\n";
	std::cin >> year;
	c = fmod(year, 100);
	d = trunc(year / 100);
	
	float f;
	//execute zellers formula
	f = (k + ((13 * m + 1) / 5) + c + (c / 4) + (d / 4) + 5 * d);
	float dow = fmod(f, 7);
	std::cout << dow << std::endl;

	system("Pause");
    return 0;
}
