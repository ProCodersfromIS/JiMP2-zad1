/*
* \file suma.h
* \author Beata Gie³baga
* \brief Suma.h zawiera definicje oraz cia³o szablonu funkcji
*/

#include "suma_spec.h"

//deklaracja szablonu
template <class T>

//funkcja suma przyjmuje argumenty: parametryczny input, dzieki ktoremu odnosimy siê do sk³adników sumy
//oraz len typu int, który okresla dlugosc tablicy(ilosc skladnikow) 
double suma(T input, int len)
{
	double result = 0;

	cout << endl;
	for (int i = 0; i < len; ++i)
	{
		result += input[i];
		cout << input[i];
		if (i < len - 1) //instrukcja warunkowa umo¿liwiajaca wyswietlenie sumy w postaci a + b +... = suma
			cout << " + ";
		else 
			cout << " = " << result << endl;
	}
		
	return result; //funkcja zwraca zmienna result która jest sum¹ wszystkich sk³adników input
}
