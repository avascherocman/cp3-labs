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
    std::cout << "Roll: " << d1.roll() << "\n";
    std::cout << "Roll: " << d2.roll() << "\n";
    std::cout << "Roll: " << d3.roll() << "\n";
    system("Pause");
    return 0;


}

