// Prog7_2_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "trojkat.h"

using namespace std;    

int obwod(const trojkat& t)
{
	return t.a + t.b + t.c;
}	
int main()
{
    std::cout << "Obwod trojkata o bokach 2,5,7: " << obwod(trojkat(2,5,7)) << endl;
}


