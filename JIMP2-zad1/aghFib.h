/**
* \ file aghFib.h
* \ author Kamil Dawid�w
* \ brief Plik zawiera deklaracje klasy aghFib
*/
// ------------------------------------------------------------------

#ifndef AGHFIB_H
#define AGHFIB_H

// ------------------------------------------------------------------

/**
*\ class aghFib
*\ brief klasa zwraca wartosc podanego wyrazu z ci�gu Fibonacciego
*/
class aghFib
{
public:
	//Konstruktor domyslny klasy
	aghFib();
	
	//Destruktor klasy
	~aghFib();
	
	//metoda get
	//
	int get(int);
	
	/// \brief prze�adowanie operatora []
	/// wywo�uje funkcj� get
	int operator[](int);
};
// -------------------------------------------------------------------
#endif

