/**
* \file aghFib.cpp
* \author Kamil Dawidów
* \brief plik aghFib zawiera definicje klasy aghFib
*/
// ---------------------------------------------------------------

#include "aghFib.h"

// ---------------------------------------------------------------

//Konstruktor domyslny klasy
aghFib::aghFib()
{
}

//Destruktor klasy
aghFib::~aghFib()
{
}
 //Definicja metody get
 //metoda get zwraca wartosc z ciagu Fibonnaciego o podanym jako n indeksie 
int aghFib::get(int n)
{
	int first = 0, second = 1, helper = first + second;
	if (n == 0)
		return 0;
	for (int i = 2; i <= n; i++) {
		helper = first + second;
		first = second;
		second = helper;
	}
	return second;
}

//Definicja prze³adowania operatora []
//operator [] bêdzie zwraca³ wartosc get dla parametru n
int aghFib::operator[](int n)
{
	return get(n);
}

// ---------------------------------------------------------------
