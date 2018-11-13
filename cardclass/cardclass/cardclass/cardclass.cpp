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
  d.shuffle(52);
  d.printW(52);
  
  
  system("Pause");

  return 0;
}