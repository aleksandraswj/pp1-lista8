#pragma once
#include <iostream>
#include <sstream>
#include <string>	
using namespace std;
struct punktn
{	
	public:
		punktn() : n(0) { t = new double[0]; }	
		punktn(int n) : n(n) { t = new double[n]; }
		punktn(int n, const double* t) : n(n) { this->t = new double[n]; for (int i = 0; i < n; i++) this->t[i] = t[i]; }
		punktn(const punktn& p) : n(p.n) { t = new double[n]; for (int i = 0; i < n; i++) t[i] = p.t[i]; }	
		~punktn() { delete[] t; }	
		punktn& operator=(const punktn& p)
		{
			if (this != &p)
			{
				delete[] t;
				n = p.n;
				t = new double[n];
				for (int i = 0; i < n; i++) t[i] = p.t[i];
			}
			return *this;
		}	
		string toString() const
		{
			stringstream s;
			s << "(";
			for (int i = 0; i < n; i++)
			{
				s << t[i];
				if (i < n - 1) s << ", ";
			}
			s << ")";
			return s.str();
		}	
	private:
		double* t;
		int n;
}; 
