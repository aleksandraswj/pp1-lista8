// Prog7_2_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "punktn.h"

using namespace std;

void kopiuj(struct punktn tab1[], struct punktn tab2[], int n)
{
	int i;
	int j;
for (i = 0; i < n; i++)
	{
		tab2[i].t = malloc(tab1[i].x * sizeof(double));
		for (j = 0; j < tab1[i].x; j++)
		{
			tab2[i].t[j] = tab1[i].t[j];
		}
	}
}


int main()
{
    std::cout << "Hello World!\n";
}
