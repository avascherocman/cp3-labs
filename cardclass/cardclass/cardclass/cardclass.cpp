// cardclass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "card.h"
#include "deck.h"

int main()
{
  deck d;
  d.printW(52);
  d.printP(52);
  
  system("Pause");

  return 0;
}