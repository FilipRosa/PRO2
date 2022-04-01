#include <iostream>
using namespace std;

int main()
{
	const int PocetPrvkov = 10;
	int pole[PocetPrvkov] = {};

	//naplnenie prvkov pola nahodnymi cislami z rozsahu 10-99
	srand(time(NULL));
	for (int i = 0; i < PocetPrvkov; i++)
	{
		pole[i] = rand() % 90 + 10;
	}

	//vypis vsetkych prvkov pola
	for (int i = 0; i < PocetPrvkov; i++)
	{
		cout << i << ". prvok: " << pole[i] << endl;
	}

	//vypocet priemernej hodnoty vsetkych prvkov pola
	float sucet = 0;
	for (int i = 0; i < PocetPrvkov; i++)
	{
		sucet = sucet + pole[i];
	}
	float priemer;
	priemer = sucet / PocetPrvkov;
	cout << "Priemerna hodnota pola je: " << priemer << endl;

	//vypis prvkov s nadpriemernou hodnotou
	cout << "Prvky s nadpriemernou hodnotou:" << endl;
	for (int i = 0; i < PocetPrvkov; i++)
	{
		if (pole[i] > priemer)
		{
			cout << i << ". prvok: " << pole[i] << endl;
		}
	}

}