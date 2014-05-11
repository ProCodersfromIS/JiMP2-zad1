/**
* \file aghFib.h
* \author Kamil Dawidów
* \date 8.5.2014 
* \brief Plik zawiera deklaracje klasy aghFib
*/
// ------------------------------------------------------------------

#ifndef AGHFIB_H
#define AGHFIB_H

// ------------------------------------------------------------------

/**
* \class aghFib
* \author Kamil Dawidów
* \date 8.5.2014
* \brief klasa zwraca wartosc podanego wyrazu z ci¹gu Fibonacciego
*/
class aghFib
{
public:
	/// \brief Konstruktor bezparametrowy
	aghFib();
	
	/// \brief Destruktor 
	~aghFib();
	
	/// \brief metoda get zwraca wartosc n-tego wyrazu ciagu Fibonacciego
	///
	/// \param n - numer wyrazu ciagu
	/// \return - wartosc n-tego wyrazu ciagu
	int get(int n);
	
	/// \brief prze³adowanie operatora [], wywoluje metode get z argumentem n, przekazanym w nawiasie []
	///
	/// \param n - numer wyrazu ciagu, przekazywany jako argument do metody get
	int operator[](int n);
};
// -------------------------------------------------------------------
#endif

