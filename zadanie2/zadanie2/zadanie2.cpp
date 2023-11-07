#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	fstream plik;
	char tresc[100];
	//-------------------------------------------------------------------------------------------------------------------
	plik.open("artykol.txt", ios::in | ios::out | ios::trunc);
	cout << "Wprowadz artykol: " << endl;
	cin.getline(tresc, 100, '\n');

	plik << tresc;

	plik.close();
	//-------------------------------------------------------------------------------------------------------------------
	//wczytywanie danych z pliku artykol.txt

	ifstream plikOdczyt;//bezsensu

	plikOdczyt.open("artykol.txt");
	
	if (plikOdczyt.is_open())
	{
		string linia, zawartosc;
		

		while (!plikOdczyt.eof())
		{
			znak = plikOdczyt.get();
			if (plikOdczyt.good())
			{
				cout << znak << endl;
			}
			else
			{
				cout << "Nie moge otworzyc pliku" << endl;
			}
		}
	}

	plikOdczyt.close();
	system("pause");

	EXIT_SUCCESS;

	return 0;
}