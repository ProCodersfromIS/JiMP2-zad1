/*
* \file suma.h
* \author Beata Gie�baga
* \date 8.04.2014
* \brief Suma.h zawiera definicje oraz cia�o szablonu funkcji
*/

using namespace std;

/// \brief Funkcja specjalizowana sklejaj�ca zmienne typu char w jeden napis
///
/// \param input - wsaka�nik do tablicy char�w, dzi�ki kt�remu odwo�amy si� do poszczeg�lnych element�w tablicy
/// \param len - okresla dlugosc tablicy
/// \return result - dlugosc wyrazu sklejonego ze znakow z input
double suma(char** input, int len)
{
	cout << endl;
	double result = 0;
	string helper = ""; 

	for (int i = 0; i < len; ++i)
	{
		helper += input[i];
		cout << input[i];
		if (i < len - 1)
			cout << " + ";
		else
		{
			result = helper.length();
			cout << " = " << helper << "(" << result << ")" << endl;
		}
	}

	return result;
}
