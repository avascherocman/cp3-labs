// cardclass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "card.h"

int main()
{
  card c(3, 4);
  char i = 3;
  std::cout << c.printCard();
  std::cout << i;
  system("Pause");

    return 0;
}

