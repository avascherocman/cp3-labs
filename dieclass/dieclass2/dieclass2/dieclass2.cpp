// dieclass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "die.h"

int main()
{
  int sides;
  std::cout << "How many sides would you like for the second roll?";
  std::cin >> sides;
    die d1;
    die d2(sides);
   // die d3(d2);
    std::cout << "Default Roll: " << d1.roll() << "\n";
    std::cout << "Fill Roll: " << d2.roll() << "\n";
   // std::cout << "Copy Roll: " << d3.roll() << "\n";
    system("Pause");
    return 0;


}

