#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int k, i;
	P = 0;
	k = 1;
	while (k <= 20)

	{
		S = 0;
		i = 1;
		while (i <= k)

		{
			S += cos(1. * i + 1. * k);
			i++;

		}
		P += sqrt(sin(1. * k) * sin(1. * k) + abs(S));
		k++;

	}
	cout << P << endl;
	P = 0;
	k = 1;
	do
	{
		S = 0;
		i = 1;
		do
		{
			S += cos(1. * i + 1. * k);
			i++;
		} while (i <= k);
		P += sqrt(sin(1. * k) * sin(1. * k) + abs(S));
		k++;
	} while (k <= 20);
	cout << P << endl;
	P = 0;
	for (k = 1; k <= 20; k++)

	{
		S = 0;
		for (i = 1; i <= k; i++)

		{
			S += cos(1. * i + 1. * k);

		}
		P += sqrt(sin(1. * k) * sin(1. * k) + abs(S));

	}
	cout << P << endl;
	P = 0;
	for (k = 20; k >= 1; k--
		)

	{
		S = 0;
		for (i = k; i >= 1; i--
			)

		{
			S += cos(1. * i + 1. * k);
		}
		P += sqrt(sin(1. * k) * sin(1. * k) + abs(S));
	}
	cout << P << endl;
	return 0;
}