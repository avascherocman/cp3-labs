#include "stdafx.h"
#include<iostream>
#include<iomanip>



int main()
{
	int dollars;

	float kilowatts, ct;

	std::cout << "Enter kilowatts used: ";
	std::cin >> kilowatts;
	ct = cd * 100;
	dollars = (int)(ct / 100);
	ct = ct - d * 100;

	std::cout << std::endl;
	std::cout << std::setfill('*') << std::setw(26) << "" << std::endl;

	std::cout << std::setiosflags(std::ios::fixed | std::ios::showpoint) << std::setprecision(2);
	std::cout << std::setiosflags(std::ios::left) << std::setfill(' ') << std::setw(10) << "Dollars" << std::resetiosflags(std::ios::left) << std::setw(4) << dollars << std::setw(4) << "$" << std::setw(6) << (float)d << std::endl;

	std::cout << std::setfill('*') << std::setw(26) << "" << std::endl;
	std::setfill(" ");


	system("Pause");
	return 0;
}