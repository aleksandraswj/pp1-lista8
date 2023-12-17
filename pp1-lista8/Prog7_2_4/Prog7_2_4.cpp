// Prog7_2_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "punkt.h"

using namespace std;

void kopiuj(punkt tab1[], punkt tab2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		tab2[i] = tab1[i];
	}
}	

int main()
{
	punkt tab1[5] = { {1,10},{1,2},{50,60},{90,92},{90,90} };
	punkt tab2[5];
    kopiuj(tab1, tab2, 5);	
    cout << tab2[0].toString() << " " << tab2[1].toString() << " " << tab2[2].toString() << " " << tab2[3].toString() << " " << tab2[4].toString() << endl;
}

