/**
* \file aghFib.cpp
* \author Kamil Dawidów
* \date 8.5.2014
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
 //metoda get zwraca wartosc n-tego wyrazu ciagu Fibonacciego
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

//Definicja przeladowania operatora []
//operator [] wywoluje funkcje get od argumentu n
int aghFib::operator[](int n)
{
	return get(n);
}

// ---------------------------------------------------------------
