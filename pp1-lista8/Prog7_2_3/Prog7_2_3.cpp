// Prog7_2_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>	
#include <limits>
#include <math.h>
#include "punkt.h"
using namespace std;

double minOdleglosc(punkt tab[], size_t n)
{
	double odleglosc;
	double min = sqrt(pow(tab[1].x - tab[0].x, 2) + pow(tab[1].y - tab[0].y, 2) + pow(tab[1].z - tab[0].z, 2));
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			double odleglosc = sqrt(pow(tab[j].x - tab[i].x, 2) + pow(tab[j].y - tab[i].y, 2) + pow(tab[j].z - tab[i].z, 2));
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
    punkt tab[5] = { {1,10,12},{1,2,6},{50,60,80} };	
    cout << minOdleglosc(tab, 3) << endl;
}

