/**
* \ file aghFib.h
* \ author Kamil Dawidów
* \ brief Plik zawiera deklaracje klasy aghFib
*/
// ------------------------------------------------------------------

#ifndef AGHFIB_H
#define AGHFIB_H

// ------------------------------------------------------------------

/**
*\ class aghFib
*\ brief klasa zwraca wartosc podanego wyrazu z ci¹gu Fibonacciego
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
	
	/// \brief prze³adowanie operatora []
	/// wywo³uje funkcjê get
	int operator[](int);
};
// -------------------------------------------------------------------
#endif

