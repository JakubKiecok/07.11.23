#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	fstream plik;
	string linia, zawartosc;

	plik.open("imiona.txt", ios::in | ios::out | ios::app);
	cout << "Napisz imie : "; cin >> zawartosc;
	if (plik.good())
	{
		plik << zawartosc << "\n";
		while (getline(plik, linia))
		{
			cout << linia << endl;
		}
	}
	else
	{
		cout << "Nie ma takiego pliku" << endl;
	}
	plik.close();

	/*while (getline(plik, linia))
	{
		cout << linia << endl;
	}*/

	EXIT_SUCCESS;
}