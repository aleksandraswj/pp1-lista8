// Prog7_2_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "student.h"

using namespace std;

void ustawDane(student* a)
{
	cout << "Podaj imie: ";
	cin >> a->imie;
	cout << "Podaj nazwisko: ";
	cin >> a->nazwisko;
	cout << "Podaj numer adres: ";
	cin >> a->adres;
	cout << "Podaj pesel: ";
	cin >> a->pesel;
	cout << "Podaj kierunek: ";
	cin >> a->kierunek;
	cout << "Podaj numer legitymacji: ";
	cin >> a->numer_legitymacji;
}
void wypiszDane(student* b)
{
	cout << "Imie: " << b->imie << endl;
	cout << "Nazwisko: " << b->nazwisko << endl;
	cout << "Numer adres: " << b->adres << endl;
	cout << "Pesel: " << b->pesel << endl;
	cout << "Kierunek: " << b->kierunek << endl;
	cout << "Numer legitymacji: " << b->numer_legitymacji << endl;
}

int main()
{
	student a;

	ustawDane(&a);
	wypiszDane(&a);
}

