#include <iostream>
#include <fstream>
using namespace std;
//wyczyszczenie konkretnych znakiw z pliku od znaku x do y
int main()
{
	fstream plik;

	char tresc[10] = {};
	
	plik.open("artykol.txt", ios::out);

	if (plik.good())
	{
		plik.seekg(5);
		//plik.read(tresc,1);
	}
	else
	{
		cout << "Plik nie istnieje" << endl;
	}

	plik.close();
	
	system("pause");

	EXIT_SUCCESS;

	return 0;
}