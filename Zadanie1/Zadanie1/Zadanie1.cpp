#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	fstream plik;
	string linia;
	char tresc[100];
	plik.open("artykol.txt", ios::in | ios::out | ios::trunc);
	cout << "Wprowadz artykol: " << endl;
	cin.getline(tresc, 100, '\n');

	plik << tresc;

	plik.close();

	system("pause");

	EXIT_SUCCESS;

	return 0;
}