#include "Vec3.h"
#include <vector>
#include <math.h>
using namespace std;
namespace OOP {
	
	int OOP::Vec3::counter = 0;

	istream& OOP::operator>>(istream& is, Vec3& vec)
	{
		is >> vec.x >> vec.y >> vec.z;
		return is;
	}
	ostream& OOP::operator<<(ostream& os, Vec3& vec)
	{
		os << '(' << vec.x << ',' << vec.y << ',' << vec.z << ')' << endl;
		return os;
	}
	Vec3& OOP::Vec3::operator=(const Vec3& n)
	{
		x = n.x;
		y = n.y;
		z = n.z;
		return *this;
	}

	Vec3 OOP::operator+(const Vec3& n, const Vec3& x)
	{
		Vec3 novi;
		novi.x = n.x + x.x;
		novi.y = n.y + x.y;
		novi.z = n.z + x.z;
		return novi;

	}
	Vec3 OOP::operator-(const Vec3& n, const Vec3& x)
	{
		Vec3 novi;
		novi.x = n.x - x.x;
		novi.y = n.y - x.y;
		novi.z = n.z - x.z;
		return novi;

	}
	Vec3 OOP::Vec3::operator/(int n)
	{
		this->x = x / n;
		this->y = y / n;
		this->z = z / n;
		return *this;
	}
	Vec3 OOP::Vec3::operator*(int n)
	{
		this->x = x * n;
		this->y = y * n;
		this->z = z * n;
		return *this;
	}
	bool OOP::operator==(const Vec3& n, const Vec3& x) 
	{

		if (n.x == x.x && n.y == x.y && n.z == x.z)
			return true;
		return false;
	}
	bool OOP::operator!=(const Vec3 & n, const Vec3 & x) 
	{
		return !(n == x);
	}
	Vec3& Vec3::operator+=(const Vec3 & n)
	{
		this->x += n.x;
		this->y += n.y;
		this->z += n.z;
		return *this;
	}
	Vec3& OOP::Vec3::operator-=(const Vec3 & n)
	{
		this->x -= n.x;
		this->y -= n.y;
		this->z -= n.z;
		return *this;
	}
	Vec3& OOP::Vec3::operator*=(const Vec3 & n)
	{
		this->x *= n.x;
		this->y *= n.y;
		this->z *= n.z;
		return *this;
	}
	Vec3& OOP::Vec3::operator/=(const Vec3 & n)
	{
		this->x /= n.x;
		this->y /= n.y;
		this->z /= n.z;
		return *this;
	}
	double OOP::Vec3::operator[](int n) const
	{
		vector<double> Vec;
		Vec.push_back(this->x);
		Vec.push_back(this->y);
		Vec.push_back(this->z);
		return Vec.at(n);
	}
	double OOP::operator*(const Vec3 & n, const Vec3 & x)
	{
		double z= n.x * x.x + n.y * x.y + n.z * x.z;
		return z;
	}
	Vec3& normalizacija(Vec3& n)
	{
		if (n.dohvati_x() == 0 && n.dohvati_y() == 0 && n.dohvati_z() == 0)
		{
			cout << "Greska! Vektor je jednak nuli, ne moze se normalizirati" << endl;
		}
		else {
			double S = sqrt(pow(n.dohvati_x(),2.0) + pow(n.dohvati_y(),2.0) + pow(n.dohvati_z(),2.0));
			n.dohvati_x()=n.dohvati_x() / S;
			n.dohvati_y()=n.dohvati_y() / S;
			n.dohvati_z()=n.dohvati_z() / S;
		}
		
		return n;
	}
}