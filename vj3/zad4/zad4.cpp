#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
void ukloni(vector<int>& sibice, int broj)
{
	for (int i = 0; i < broj; i++) {
		sibice.pop_back();
	}
}
bool provjeri(vector<int>& sibice)
{
	for (int i = 0; i < 4; i++) {
		if (sibice.size() == (i * 4 + 1))
			return true;
	}
}
void korisnik(vector<int>& sibice,int odabir)
{
	if (sibice.size() == 1) {
		cout << "korisnik je izgubio" << endl;
		sibice.pop_back();
	}
	if (odabir > sibice.size())
	{
		cout << "korisnik gubi" << endl;
		while (sibice.size() > 0) sibice.pop_back();
		return;
	}
	ukloni(sibice, odabir);
	
}
void racunalo(vector<int>& sibice)
{
	srand(time(NULL));
	int odabir;
	if (sibice.size() == 1) {
		cout << "racunalo je izgubilo" << endl;
		sibice.pop_back();
		
	}
	
	if (!provjeri(sibice))
	{
		odabir = 2 + (rand() % 2);
		ukloni(sibice, odabir);
	}
	else {
		odabir = 1 + (rand() % 3);
		ukloni(sibice, odabir);
	}

	if (sibice.size() == 3) {
		odabir = 2;
		ukloni(sibice, odabir);
	}
	if (sibice.size() == 2) {
		odabir = 1;
		sibice.pop_back();
	}
}

int main()
{
	vector<int> sibice(21);
	int odabir;
	while (sibice.size() > 0)
	{
		racunalo(sibice);
		if (sibice.size() == 0) break;
		cout << "Ostalo je " << sibice.size() << " sibica" << endl;
		cout << "Unesite broj sibica koje zelite uzeti (izmedu 1,2 ili 3):";
		cin >> odabir;
		if (!(odabir==1 || odabir==2 || odabir==3))
		{
			cout << "Vas odabir je netocan. Molim vas unesite ponovo: ";
			cin >> odabir;
		}
		korisnik(sibice, odabir);
		cout << "Ostalo je " << sibice.size() << "sibica" << endl;

	}
}
