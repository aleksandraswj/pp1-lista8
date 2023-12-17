// Prog7_2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>	
#include <limits>
#include "punkt.h"
using namespace std;

double minOdleglosc(punkt tab[], size_t n)
{
	double min = numeric_limits<double>::max();
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			double odleglosc = sqrt(pow(tab[i].x - tab[j].x, 2) + pow(tab[i].y - tab[j].y, 2));
			if (odleglosc < min)
			{
				min = odleglosc;
			}
		}	
	}
	return min;
}
int main()
{
    punkt tab[5] = { {1,10},{1,2},{50,60},{90,92},{90,90} };	
    cout << minOdleglosc(tab, 5) << endl;
}

