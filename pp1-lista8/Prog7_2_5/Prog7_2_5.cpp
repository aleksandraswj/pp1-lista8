// Prog7_2_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "punkt10.h"

using namespace std;

void kopiuj(punkt10 tab1[], punkt10 tab2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		tab2[i] = tab1[i];
	}
}


int main() {

	const int iloscPunktow = 3;
	punkt10 punkt({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 });
	punkt10 tab1[iloscPunktow] = { punkt, punkt, punkt };
	punkt10 tab2[iloscPunktow];
	kopiuj(tab1, tab2, iloscPunktow);
	cout << sizeof(tab1[0]) << endl;
	cout << "tab2[0] = " << tab2[0].toString() << " " << "tab2[1] = " << tab2[1].toString() << " " << "tab2[2] = " << tab2[2].toString() << " " << endl;	

}