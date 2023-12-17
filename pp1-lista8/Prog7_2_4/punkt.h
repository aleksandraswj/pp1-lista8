#pragma once
#include <string>	
using namespace std; 

struct punkt
{
	double x;
	double y;
	punkt(double x, double y) : x(x), y(y) {}
	punkt() : x(0), y(0) {}	
	string toString() {
		return "(" + to_string(x) + "," + to_string(y) + ")";
	}	
};

