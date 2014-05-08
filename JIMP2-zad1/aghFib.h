#ifndef AGHFIB_H
#define AGHFIB_H

class aghFib
{
public:
	//konstruktor bezparametrowy
	aghFib();
	//destruktor
	~aghFib();
	//funkcja zwraca wartoœæ podanego wyrazu ci¹gu
	int get(int);
	//prze³adowanie operatora [], wywo³uje funkcjê get
	int operator[](int);
};

#endif

