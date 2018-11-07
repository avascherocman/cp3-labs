// dieclass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "die.h"

int main()
{
  die d1;
  die d2(4);
  die d3(d2);
  std::cout << d1.roll() << "\n";
  std::cout << d2.roll()< "\n";
  std::cout << d3.roll() << "\n";

  return 0;
}

  