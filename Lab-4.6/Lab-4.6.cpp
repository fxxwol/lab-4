#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int k, i;
	S = 0;
	i = 5;
	while (i <= 25)

	{
		P = 1;
		k = 1;
		while (k <= i * i)

		{
			P *= k;
			k++;

		}
		S += sqrt(i * i + P) / (1. * i);
		i++;

	}
	cout << S << endl;
	S = 0;
	i = 5;
	do
	{
		P = 1;
		k = 1;
		do
		{
			P *= k;
			k++;
		} while (k <= i * i);
		S += sqrt(i * i + P) / (1. * i);
		i++;
	} while (i <= 25);
	cout << S << endl;
	S = 0;
	for (i = 5; i <= 25; i++)

	{
		P = 1;
		for (k = 1; k <= i * i; k++)

		{
			P *= k;

		}
		S += sqrt(i * i + P) / (1. * i);

	}
	cout << S << endl;
	S = 0;
	for (i = 25; i >= 5; i--)

	{
		P = 1;
		for (k = i * i; k >= 1; k--)

		{
			P *= k;
		}
		S += sqrt(i * i + P) / (1. * i);
	}
	cout << S << endl;
	return 0;
}
