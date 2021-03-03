#include <iostream>
#include <ctime>
#include "food.h"
template<typename T>
constexpr auto arrayLength(T array) { return (sizeof((array))/sizeof((array)[0])); }

int tren_god() {
	time_t t;
	time(&t);
	struct tm *now = localtime(&t);
	return now->tm_year + 1900;
}
int tren_mje() {
	time_t t;
	time(&t);
	struct tm* now = localtime(&t);
	return now->tm_mon + 1;
}
void Potrosnja::printaj() const
{
 	cout <<"godina "<< this->god <<  " mjesec" << this->mje << " mjesecna potrosnja za taj mjesec(kg) " << this->mjesecna_potrosnja << endl;
}

Food::Food(string vrsta, string naziv, Datum rok, int dnevna_kolicina, int voda, int proteini, int masti, int ugljik)
{

	static size_t velicina = ((rok.godina - tren_god()) * 12) + (rok.mjesec - tren_mje());
	this->vrsta = vrsta;
	this->naziv = naziv;
	this->datum = rok;
	this->dnevna_kol = dnevna_kolicina;
	this->kolicina_vode = voda;
	this->kolicina_proteina = proteini;
	this->kolicinu_masti = masti;
	this->kolicina_ugljikohidrata = ugljik;
	this->velicina = velicina * 2;
	this->potrosnja = new Potrosnja[velicina * 2];
}
Food::Food(const Food &f)
{
	vrsta = f.vrsta;
	naziv = f.naziv;
	datum = f.datum;
	dnevna_kol = f.dnevna_kol;
	kolicina_vode = f.kolicina_vode;
	kolicina_proteina = f.kolicina_proteina;
	kolicinu_masti = f.kolicinu_masti;
	kolicina_ugljikohidrata = f.kolicina_ugljikohidrata;
	velicina = f.velicina;
	potrosnja = new Potrosnja[velicina * 2];
	for (int i = 0; i < datum.mjesec * 2; i++) {
		potrosnja[i] = f.potrosnja[i];
	}

}
Food::~Food()
{
	cout << "unistili se podatke o:" << this->naziv << endl;
	delete[] this->potrosnja;

}
void Food::promjeni_kolicinu(bool x)
{
	if (x)
		this->dnevna_kol++;
	this->dnevna_kol--;
}
void Food::postavi_potrosnju(int kg, unsigned mje, unsigned god)
{
	unsigned i;
	for (i = 0; i < this->velicina * 2; i++)
	{
		if (potrosnja[i].potrosnja_mjesec() == 0)
			break;
		if (potrosnja[i].potrosnja_godina() == god && potrosnja[i].potrosnja_mjesec() == mje && potrosnja[i].potrosnja_godina() != tren_god()) {
			cout << "Potrosnja za taj mjesec vec postoji " << endl;
			return;
		}
		if (potrosnja[i].potrosnja_godina() == god && potrosnja[i].potrosnja_mjesec() == mje)
		{
			potrosnja[i].postavi_godinu(god);
			potrosnja[i].postavi_mjesecno(kg);
			potrosnja[i].postavi_mjesec(mje);
			cout << "Potrosnja za taj mjesec vec postoji " << endl;
		}
	}
	potrosnja[i].postavi_mjesec(mje);
	potrosnja[i].postavi_mjesecno(kg);
	potrosnja[i].postavi_godinu(god);
}
double Food::postotak() const
{
	int prvapotrosnja = 0;
	int posljednjapotrosnja = 0;
	for (int i = 0; i < this->velicina *2; i++) {
		if (this->potrosnja[i].potrosnja_mjesec() != 0 && this->potrosnja[i].potrosnja_godina() == tren_god()) {
			posljednjapotrosnja = this->potrosnja[i].potrosnja_mjesceno();
		}
		else if (this->potrosnja[i].potrosnja_godina() == tren_god()) {
			prvapotrosnja = this->potrosnja[i].potrosnja_mjesceno();
			break;
		}
	}
	if (prvapotrosnja && prvapotrosnja == 0)
		return NULL;
	if (posljednjapotrosnja == 0)
		return NULL;
	double postotak = (posljednjapotrosnja - prvapotrosnja) / posljednjapotrosnja * 100.0;
	return postotak;
}


int Food::dohvati_mjesec() const
{
	return datum.mjesec;
}

int Food::dohvati_godinu() const
{
	return datum.godina;
}

void Food::print() const
{
	cout << "Vrsta: " << vrsta << " Naziv: " << naziv << "\nDnevna kolicina: " << dnevna_kol <<
	"\nKolicina vode: " << kolicina_vode << "\nKolicina proteina: " << kolicina_proteina << "\nKolicina masti: " << kolicinu_masti << endl;

	int x;
	cout << "Zelite li da printa mjesecnu potrosnju? (1 = da / 0 = ne) ";
	cin >> x;
	if (x == 1) {
		for (int i = 0; i < this->velicina * 2; i++) {
			if (this->potrosnja[i].potrosnja_mjesec() == 0)
				break;
			else
				potrosnja[i].printaj();
		}
	}
	else
		return;
	
}

