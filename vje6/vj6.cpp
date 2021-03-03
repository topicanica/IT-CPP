#include"Vec3.h"
using namespace OOP;

int main()
{
	Vec3 v1;
	cin >> v1;
	Vec3 v2;
	cin >> v2;
	Vec3 v3;
	cout <<"broj instanciranih objekata je"<< OOP::Vec3::dohvati_broj() << endl;
	cout << "test jednakosti" << endl;
	v3 = v1;
	cout << v3;
	cout << "test operatora +" << endl;
	v3 = v1 + v2;
	cout << v3;
	cout << "test operatora -" << endl;
	v3 = v1 - v2;
	cout << v3;
	int x;
	cout << "unesite kojim skalarom zelite pomnoziti vektor:" << endl;
	cin >> x;
	v3 = v1 * x;
	cout << v3;
	cout << "unesite kojim skalarom zelite podijeliti vektor:" << endl;
	cin >> x;
	v3 = v1 / x;
	cout << v3;
	cout << "test operatora +=, -=, *= i /=" << endl;
	v3 = v1 += v2;
	cout << v3;
	v3= v1 -= v2;
	cout << v3;
	v1 *= v2;
	cout << v3;
	v1 /= v2;
	cout << v3;
	cout << " test operatora jednakosti i nejednakosti" << endl;
	if (v1 == v3)
		cout << "isti su" << endl;
	if (v1 != v3)
		cout << "nisu isti" << endl;
	cout << "test skalarnog produkta" << endl;
	x= v1 * v2;
	cout << x << endl;
	char n;
	cout << "unesite koju koordinatu zelite: x,y ili z:" << endl;
	cin>> n;
	switch (n)
	{
		case 'x':
			cout << v3[0] << endl;
			break;
		case 'y':
			cout << v3[1] << endl;
			break;
		case 'z':
			cout << v3[2] << endl;
			break;
		default:
			cout << "Greska! unos je netocan, unesite ponovo:" << endl;
			cin >> n;
	}
	cout << "test normalizacije";
	cout << normalizacija(v1);
	cout <<"broj instanciranih objekata je:"<< OOP::Vec3::dohvati_broj() << endl;


}