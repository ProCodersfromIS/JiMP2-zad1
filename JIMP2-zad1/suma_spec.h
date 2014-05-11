/*
* \file suma_spec.h
* \author Beata Gie³baga
<<<<<<< HEAD
* \date 8.04.2014
* \brief Suma.h zawiera definicje oraz cia³o szablonu funkcji
*/

using namespace std;

/// \brief Funkcja specjalizowana sklejaj¹ca zmienne typu char w jeden napis
///
/// \param input - wsakaŸnik do tablicy charów, dziêki któremu odwo³amy siê do poszczególnych elementów tablicy
/// \param len - okresla dlugosc tablicy
/// \return result - dlugosc wyrazu sklejonego ze znakow z input
=======
* \brief suma_spec.h zawiera definicje oraz cialo szablonu funkcji
*/

//pisanie deklaracji szablonu(<template<>) mo¿na pominac dla funkcji specjalizowanej
using namespace std;

//funkcja suma przyjmuje argumenty: wsakaznik do tablicy charow, dzieki ktoremu odwolamy sie do poszczegolnych elementow tablicy
//oraz len typu int który okresla dlugosc tablicy
>>>>>>> daaac7408a7813c596f76ae891bbbcd80e990ff0
double suma(char** input, int len)
{
	cout << endl;
	double result = 0;
	string helper = ""; 

	for (int i = 0; i < len; ++i)
	{
		helper += input[i];
		cout << input[i];
<<<<<<< HEAD
		if (i < len - 1)
=======
		if (i < len - 1) //instrukcja warunkowa aby by³a mozliwosc wypisania sumy znakow w taki sposob a+b+c=abc
>>>>>>> daaac7408a7813c596f76ae891bbbcd80e990ff0
			cout << " + ";
		else
		{
			result = helper.length();
			cout << " = " << helper << "(" << result << ")" << endl;
		}
	}

<<<<<<< HEAD
	return result;
=======
	return result; //funkcja zwraca zmienna result ktorej wartosc rowna siê dlugosci wyrazu powstalego przez sklejenie wyrazow z tablicy input
>>>>>>> daaac7408a7813c596f76ae891bbbcd80e990ff0
}
