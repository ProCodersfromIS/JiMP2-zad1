#include "suma_spec.h"

<<<<<<< HEAD
template <class T> //definicja szablonu
=======
//proba, Github

template <class T>
>>>>>>> 40e871858b6c254dc7aa5b6913e6f4812f6a2d2a
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
<<<<<<< HEAD
}
=======
}
>>>>>>> 40e871858b6c254dc7aa5b6913e6f4812f6a2d2a
