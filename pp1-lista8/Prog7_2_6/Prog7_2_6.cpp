// Prog7_2_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "punktn.h"

using namespace std;

void kopiuj(punktn tab1[], punktn tab2[], unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		tab2[i] = tab1[i];
	}
}


int main()
{
	const int rozmiarPrzestrzeni = 3;
	const int iloscPunktow = 3;	
	double wspolrzedne1[rozmiarPrzestrzeni] = { 1.0, 1.0, 1.0 };
	double wspolrzedne2[rozmiarPrzestrzeni] = { 1.0, 1.0, 0.0 };
	double wspolrzedne3[rozmiarPrzestrzeni] = { 0.0, 1.0, 1.0 };
	punktn punkt1(rozmiarPrzestrzeni, wspolrzedne1);
	punktn punkt2(rozmiarPrzestrzeni, wspolrzedne2);
	punktn punkt3(rozmiarPrzestrzeni, wspolrzedne3);
	punktn tab1[iloscPunktow] = { punkt1, punkt2, punkt3 };
	punktn tab2[iloscPunktow];
	cout << sizeof(punkt1) << endl;
	kopiuj(tab1, tab2, iloscPunktow);
	cout << "tab2[0] = " << tab2[0].toString() << " " << "tab2[1] = " << tab2[1].toString() << " " << "tab2[2] = " << tab2[2].toString() << " "  << endl;
}