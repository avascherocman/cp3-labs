// cardclass2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "card.h"
#include "deck.h"

int main()
{
  deck d;
  d.print(52);
  system("Pause");

  return 0;
}