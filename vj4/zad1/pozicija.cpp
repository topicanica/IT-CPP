
#include "pozicija.h"

void Pozicija::postavi()
{
	d = 0;
	s = 0;
	v = 0;
}

void Pozicija::pseudorandom(const double max, const double min)
{
	d = ((double)rand() / RAND_MAX) * (max - min) + min;
	s = ((double)rand() / RAND_MAX) * (max - min) + min;
	v = ((double)rand() / RAND_MAX) * (max - min) + min;
}

double Pozicija::dohvati_duzinu() const
{
	return this->d;
}

double Pozicija::dohvati_sirinu() const
{
	return this->s;
}

double Pozicija::dohvati_visinu() const
{
	return this->v;
}

void Pozicija::izracunaj_2D(Pozicija const p2)
{
	printf("%.7lf\n",sqrt(pow((d - p2.d),2) + pow((s - p2.s),2)));
}

void Pozicija::izracunaj_3D(Pozicija const p2)
{
	printf("%.7lf\n",sqrt(pow((d - p2.d),2)+ pow((s - p2.s),2) + pow((v - p2.s),2)));

}
void Pozicija::print_p() const
{
	printf("%.7lf\n", d);
	printf("%.7lf\n", s);
	printf("%.7lf\n", v);
}