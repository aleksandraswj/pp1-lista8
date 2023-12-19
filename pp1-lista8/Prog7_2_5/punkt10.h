#pragma once
#include <iostream>
#include <sstream>
#include <string>	
using namespace std;

struct punkt10
{
	
	double tab[10];
	string toString() const
	{
		stringstream s;
		s << "(";
		for (int i = 0; i < 10; i++)
		{
			s << tab[i];
			if (i < 10 - 1) s << ", ";
		}
		s << ")";
		return s.str();
	}
};

