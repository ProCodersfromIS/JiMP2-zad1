/*
* \file suma.h
* \author Beata Gie³baga
* \brief Suma.h zawiera definicje oraz cialo szablonu funkcji
*/

#include "suma_spec.h"

//deklaracja szablonu
template <class T>

//funkcja suma przyjmuje argumenty: parametryczny input, dzieki ktoremu odnosimy sie do sk³adnikow sumy
//oraz len typu int, ktory okresla dlugosc tablicy(ilosc skladnikow) 
double suma(T input, int len)
{
	double result = 0;

	cout << endl;
	for (int i = 0; i < len; ++i)
	{
		result += input[i];
		cout << input[i];
		if (i < len - 1) //instrukcja warunkowa umozliwiajaca wyswietlenie sumy w postaci a + b +... = suma
			cout << " + ";
		else 
			cout << " = " << result << endl;
	}
		
	return result; //funkcja zwraca zmienna result która jest suma wszystkich sk³adnikow input
}
