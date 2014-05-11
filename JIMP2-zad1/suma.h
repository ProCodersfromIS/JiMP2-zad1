/*
* \file suma.h
* \author Beata Gie³baga
* \date 8.04.2014
* \brief Suma.h zawiera definicje oraz cia³o szablonu funkcji
*/

#include "suma_spec.h"

/// \template class T
/// \brief szablon oblicz sume wartosci z tablicy i j¹ zwraca
template <class T>


/// \brief funkcja suma oblicza sume wartosci znajdujacych sie w tablicy input

/// \param input - argument parametryczny umo¿liwia odniesienie sie do poszczegolnych skladnikow sumy
/// \param len - okresla dlugosc tablicy(ilosc skladnikow)
/// \return result - sume wartosci z input

double suma(T input, int len)
{
	double result = 0;

	cout << endl;
	for (int i = 0; i < len; ++i)
	{
		result += input[i];
		cout << input[i];
		if (i < len - 1) 
			cout << " + ";
		else 
			cout << " = " << result << endl;
	}
		
	return result;
}
