#include<iostream>
#include<vector>
#include<string>
#include"Food.h"
#include"Hummus.h"
#include"Jogurt.h"
#include"Kolaci.h"
#include"Krempita.h"
#include"Madjarica.h"
#include"Mesni.h"
#include"Meso.h"
#include"Mlijecni.h"
#include"Mlijeko.h"
#include"Prsut.h"
#include"Riza.h"
#include"Sir.h"
#include"Sunka.h"
#include"Tofu.h"
#include"Torta.h"
#include"Vege.h"
#include<time.h>
#include<vector>
#include<iostream>
using namespace std;
using namespace oss;
int main()
{	/*
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
			hrana.push_back(nova);
		}
		*/
		Datum rok;
		rok.dan = 5;
		rok.godina = 2020;
		rok.mjesec = 5;
		Krempita krempita("kolac","krempita",rok,242,234,234,234,432,345);
		cin >> krempita;
		cout << krempita;
		Prsut prsut("meso", "prsut", rok, 43, 54, 7678, 76, 45, 34, 3);
		cin >> prsut;
		cout << prsut;
		Sir sir("mlijecni", "sir", rok, 54, 6, 57, 8, 9, 67, 5);
		cin >> sir;
		cout << sir;
		Hummus hummus("vege", "hummus", rok, 54, 65, 587, 9, 5, 567, 56);
		cin >> hummus;
		cout << hummus;
		vector<Food> meni1;
		meni1.push_back(krempita);
		meni1.push_back(hummus);
		meni1.push_back(sir);
		meni1.push_back(prsut);

		vector<Food>::iterator it;
		for (it = meni1.begin(); it != meni1.end(); it++)
		{
			it->print();
		}
		
	
}