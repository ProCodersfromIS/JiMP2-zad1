#ifndef AGHFIB_H
#define AGHFIB_H

class aghFib
{
public:
	//konstruktor bezparametrowy
	aghFib();
	//destruktor
	~aghFib();
	//funkcja zwraca warto�� podanego wyrazu ci�gu
	int get(int);
	//prze�adowanie operatora [], wywo�uje funkcj� get
	int operator[](int);
};

#endif

