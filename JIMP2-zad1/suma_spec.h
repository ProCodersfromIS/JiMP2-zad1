/*
* \file suma.h
* \author Beata Gie�baga
* \brief Suma.h zawiera definicje oraz cia�o szablonu funkcji
*/

//pisanie deklaracji szablonu(<template<>) mo�na pomin�� dla funkcji specjalizowanej 
using namespace std;

//funkcja suma przyjmuje argumenty: wsaka�nik do tablicy char�w, dzi�ki kt�remu odwo�amy si� do poszczeg�lnych element�w tablicy
//oraz len typu int kt�ry okresla dlugosc tablicy
double suma(char** input, int len)
{
	cout << endl;
	double result = 0;
	string helper = ""; //zmienna pomocnicza

	for (int i = 0; i < len; ++i)
	{
		helper += input[i];
		cout << input[i];
		if (i < len - 1) //instrukcja warunkowa aby by�a mo�liwosc wypisania sumy znakow w taki sposob a+b+c=abc
			cout << " + ";
		else
		{
			result = helper.length();
			cout << " = " << helper << "(" << result << ")" << endl;
		}
	}

	return result; //funkcja zwraca zmienna result kt�rej wartosc r�wna si� dlugosc wyrazu powstalego przez skeljenie wartosci input
}
