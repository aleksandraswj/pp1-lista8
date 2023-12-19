#pragma once
#include <string>	
using namespace std; 

struct punkt
{
	double x;
	double y;
	double z;
	punkt(double x, double y, double z) : x(x), y(y), z(z) {}
	punkt() : x(0), y(0), z(0) {}
	string toString() {
		return "(" + to_string(x) + "," + to_string(y) + "," + to_string(z) + ")";
	}	
};

