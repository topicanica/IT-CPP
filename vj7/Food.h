#ifndef FOOD_H
#define FOOD_H

#include<iostream>
#include<string>
#include<vector>
using namespace std;
namespace oss {
	struct Datum {
		int dan;
		int mjesec;
		int godina;
	};
	class Potrosnja {
		int god;
		int mje;
		int mjesecna_potrosnja;
	public:
		Potrosnja() { this->mje = 0, this->mjesecna_potrosnja = 0; this->god = 0; };
		Potrosnja(int mjesec, int mjesecna_potrosnja, int godina) { this->mje = mjesec, this->mjesecna_potrosnja = mjesecna_potrosnja, this->god = godina; }
		int potrosnja_mjesec() const { return mje; }
		int potrosnja_godina() const { return god; }
		int potrosnja_mjesceno() const { return mjesecna_potrosnja; }
		void printaj() const;

		void postavi_mjesecno(int kg) { this->mjesecna_potrosnja = kg; }
		void postavi_mjesec(int mje) { this->mje = mje; }
		void postavi_godinu(int god) { this->god = god; }
	};
	class Food {
		string vrsta, naziv;
		Datum datum;
		int velicina;
		int dnevna_kol;
		int kolicina_vode, kolicina_proteina, kolicinu_masti, kolicina_ugljikohidrata;
		Potrosnja* potrosnja;
	public:
		Food(string v, string n, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik);
		~Food();
		Food(const Food& f);
		void promjeni_kolicinu(bool x);
		void postavi_potrosnju(int kg, unsigned mje, unsigned god);
		double postotak() const;
		int dohvati_mjesec() const;
		int dohvati_godinu() const;
		void print() const;


	};
	int tren_god();
}
#endif 
