#include "Rownanie_kwadratowe.h"
#include <iostream>
#include <math.h>
using namespace std;
Rownanie_kwadratowe::Rownanie_kwadratowe(float ai, float bi, float ci)
{
	a = ai;
	b = bi;
	c = ci;
}

void Rownanie_kwadratowe::oblicz_wypisz()
{
	float d;
	d = b * b - 4 * a * c;
	if (d>0)
	{
		cout << "Pierwiastkami rownania sa: " << (-b - sqrt(d)) / (2 * a) << " i " << (-b + sqrt(d)) / (2 * a);
	}
	else if (d==0)
	{
		cout << "Pierwiastkiem rownania jest: " << -b / (2 * a);
	}
	else
	{
		cout << "Rownanie nie ma rozwiazan w zbiorze liczb rzeczywistych";
	}
}
