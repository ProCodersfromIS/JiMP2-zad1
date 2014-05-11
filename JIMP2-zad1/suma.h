/*
* \file suma.h
* \author Beata Gie³baga
<<<<<<< HEAD
* \date 8.04.2014
* \brief Suma.h zawiera definicje oraz cia³o szablonu funkcji
=======
* \brief Suma.h zawiera definicje oraz cialo szablonu funkcji
>>>>>>> daaac7408a7813c596f76ae891bbbcd80e990ff0
*/

#include "suma_spec.h"

/// \template class T
/// \brief szablon oblicz sume wartosci z tablicy i j¹ zwraca
template <class T>

<<<<<<< HEAD
/// \brief funkcja suma oblicza sume wartosci znajdujacych sie w tablicy input

/// \param input - argument parametryczny umo¿liwia odniesienie sie do poszczegolnych skladnikow sumy
/// \param len - okresla dlugosc tablicy(ilosc skladnikow)
/// \return result - sume wartosci z input
=======
//funkcja suma przyjmuje argumenty: parametryczny input, dzieki ktoremu odnosimy sie do sk³adnikow sumy
//oraz len typu int, ktory okresla dlugosc tablicy(ilosc skladnikow) 
>>>>>>> daaac7408a7813c596f76ae891bbbcd80e990ff0
double suma(T input, int len)
{
	double result = 0;

	cout << endl;
	for (int i = 0; i < len; ++i)
	{
		result += input[i];
		cout << input[i];
<<<<<<< HEAD
		if (i < len - 1) 
=======
		if (i < len - 1) //instrukcja warunkowa umozliwiajaca wyswietlenie sumy w postaci a + b +... = suma
>>>>>>> daaac7408a7813c596f76ae891bbbcd80e990ff0
			cout << " + ";
		else 
			cout << " = " << result << endl;
	}
		
<<<<<<< HEAD
	return result;
=======
	return result; //funkcja zwraca zmienna result która jest suma wszystkich sk³adnikow input
>>>>>>> daaac7408a7813c596f76ae891bbbcd80e990ff0
}
