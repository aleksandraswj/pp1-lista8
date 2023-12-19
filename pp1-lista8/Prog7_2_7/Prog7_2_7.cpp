// Prog7_2_7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "zespolone.h"

using namespace std;

zespolone dodaj(zespolone a, zespolone b)
{
	zespolone wynik;
	wynik.re = a.re + b.re;
	wynik.im = a.im + b.im;
	return wynik;
}

int main()
{
	zespolone a, b, c;
	cin>>a.re>>a.im>>b.re>>b.im;
	a.re = 1;
	a.im = 2;
	b.re = 3;
	b.im = 4;
	c = dodaj(a, b);
	cout << c.re << " " << c.im << endl;
}
