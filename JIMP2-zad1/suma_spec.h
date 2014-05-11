/*
* \file suma.h
* \author Beata Gie³baga
* \brief Suma.h zawiera definicje oraz cia³o szablonu funkcji
*/

//pisanie deklaracji szablonu(<template<>) mo¿na pomin¹æ dla funkcji specjalizowanej 
using namespace std;

//funkcja suma przyjmuje argumenty: wsakaŸnik do tablicy charów, dziêki któremu odwo³amy siê do poszczególnych elementów tablicy
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
		if (i < len - 1) //instrukcja warunkowa aby by³a mo¿liwosc wypisania sumy znakow w taki sposob a+b+c=abc
			cout << " + ";
		else
		{
			result = helper.length();
			cout << " = " << helper << "(" << result << ")" << endl;
		}
	}

	return result; //funkcja zwraca zmienna result której wartosc równa siê dlugosc wyrazu powstalego przez skeljenie wartosci input
}
