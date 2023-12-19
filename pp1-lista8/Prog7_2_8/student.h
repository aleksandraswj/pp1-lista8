#pragma once
#include <iostream>

using namespace std;

struct student
{
	string imie;
	string nazwisko;
	string adres;
	int pesel;
	string kierunek;
	int numer_legitymacji;
};

void ustawDane(struct student* a);
void wypiszDane(struct student* b);