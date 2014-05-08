#include "aghFib.h"

aghFib::aghFib()
{
}


aghFib::~aghFib()
{
}

int aghFib::get(int n)
{
	int first = 0, second = 1, helper = first + second;
	if (n == 0)
		return 0;
	for (int i = 2; i <= n; i++) {
		helper = first + second;
		first = second;
		second = helper;
	}
	return second;
}

int aghFib::operator[](int n)
{
	return get(n);
}
