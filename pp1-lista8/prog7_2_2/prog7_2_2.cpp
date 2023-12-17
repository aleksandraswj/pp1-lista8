// prog7_2_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "trojkat.h"

using namespace std;

void kopiuj(trojkat troj1, trojkat* troj2)
{
    if (troj2!=NULL)
	{
		*troj2 = troj1;
	}
}


int main()
{
	trojkat troj1(1,2,3);
	trojkat troj2;
	kopiuj(troj1, &troj2);

    std::cout << "troj2.a=" << troj2.a << " troj2.b=" << troj2.b << " troj2.c=" << troj2.c << endl;
}
