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
  std::cout << d1.toStr() << "\n";
  std::cout << d2.toStr() << "\n";
  std::cout << d3.toStr() << "\n";

    return 0;
}

