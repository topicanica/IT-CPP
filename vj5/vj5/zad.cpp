#include "food.h"
#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void provjeri_postotak(Food& hrana) {
	double postotak = hrana.postotak();
	if (postotak > 10) {
		hrana.promjeni_kolicinu(false);
		cout << "kolicina uspjesno smanjena za jedan kilogram " << endl;
	}
	else if (postotak < 10) {
		hrana.promjeni_kolicinu(true);
		cout << "kolicina uspjesno povecana za jedan kilogram " << endl;
	}
	else {
		cout << "kolicina je dobra" << endl;
	}
}
int main()
{
	string vrsta, naziv;
	Datum datum;
	int dnevna_kol;
	int kolicina_vode, kolicina_proteina, kolicinu_masti, kolicina_ugljikohidrata;
	
	int x;
	cout << "Unesite koliko hrane zelite unijeti: " << endl;
	cin >> x;
	vector<Food> hrana;
	for (int i = 0; i < x; i++)
	{
		cout << "Unesite vrstu hrane " << endl;
		cin >> vrsta;
		cout << "Unesite naziv hrane " << endl;
		cin >> naziv;
		cout << "Unesite dan,mjesec i godinu roka trajanja " << endl;
		cin >> datum.dan;
		cin >> datum.mjesec;
		cin >> datum.godina;
		cout << "Unesite dnevnu kolicinu hrane(kg) " << endl;
		cin >> dnevna_kol;
		cout << "Unesite kolicinu vode, kolicinu proteina, kolicinu masti i kolicinu ugljikohidrata(g) " << endl;
		cin >> kolicina_vode;
		cin >> kolicina_proteina;
		cin >> kolicinu_masti;
		cin >> kolicina_ugljikohidrata;

		Food nova(vrsta, naziv, datum, dnevna_kol, kolicina_vode, kolicina_proteina, kolicinu_masti, kolicina_ugljikohidrata);
	
		nova.postavi_potrosnju(3, 3, 1992);
		nova.postavi_potrosnju(7, 5, 1998);
		nova.postavi_potrosnju(12, 2, 2002);
		nova.postavi_potrosnju(12, 2, 2002);
		hrana.push_back(nova);
	}
	for (auto it = hrana.begin(); it != hrana.end(); it++) {
		it->print();
		if (hrana.size() > 1) {
			provjeri_postotak(*it);
			it->print();
		}
		cout << endl;
	}
}
