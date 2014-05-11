/*
* \file suma.h
* \author Beata Gie�baga
* \brief Suma.h zawiera definicje oraz cia�o szablonu funkcji
*/

#include "suma_spec.h"

//deklaracja szablonu
template <class T>

//funkcja suma przyjmuje argumenty: parametryczny input, dzieki ktoremu odnosimy si� do sk�adnik�w sumy
//oraz len typu int, kt�ry okresla dlugosc tablicy(ilosc skladnikow) 
double suma(T input, int len)
{
	double result = 0;

	cout << endl;
	for (int i = 0; i < len; ++i)
	{
		result += input[i];
		cout << input[i];
		if (i < len - 1) //instrukcja warunkowa umo�liwiajaca wyswietlenie sumy w postaci a + b +... = suma
			cout << " + ";
		else 
			cout << " = " << result << endl;
	}
		
	return result; //funkcja zwraca zmienna result kt�ra jest sum� wszystkich sk�adnik�w input
}
