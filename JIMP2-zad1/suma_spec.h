/*
* \file suma_spec.h
* \author Beata Gie³baga
* \brief suma_spec.h zawiera definicje oraz cialo szablonu funkcji
*/

//pisanie deklaracji szablonu(<template<>) mo¿na pominac dla funkcji specjalizowanej
using namespace std;

//funkcja suma przyjmuje argumenty: wsakaznik do tablicy charow, dzieki ktoremu odwolamy sie do poszczegolnych elementow tablicy
//oraz len typu int który okresla dlugosc tablicy
double suma(char** input, int len)
{
	cout << endl;
	double result = 0;
	string helper = ""; //zmienna pomocnicza

	for (int i = 0; i < len; ++i)
	{
		helper += input[i];
		cout << input[i];
		if (i < len - 1) //instrukcja warunkowa aby by³a mozliwosc wypisania sumy znakow w taki sposob a+b+c=abc
			cout << " + ";
		else
		{
			result = helper.length();
			cout << " = " << helper << "(" << result << ")" << endl;
		}
	}

	return result; //funkcja zwraca zmienna result ktorej wartosc rowna siê dlugosci wyrazu powstalego przez sklejenie wyrazow z tablicy input
}
