#pragma once
#ifndef VEC3_H
#define VEC3_H
#include <iostream>
using namespace std;
namespace OOP {

	class Vec3 {
		double x, y, z;
		static int counter;
	public:
		Vec3() { this->x = 0, this->y = 0, this->z = 0, counter++; }
		~Vec3() { cout << "Vec3() uspjesno destruktiran" << endl; }
		double& dohvati_x(){ return x; } 
		double& dohvati_y(){ return y; }
		double& dohvati_z(){ return z; }
		friend istream& operator>> (istream&, Vec3&);
		friend ostream& operator<< (ostream&, Vec3&);
		Vec3& operator=(const Vec3& n);
		friend Vec3 operator+(const Vec3& n,const Vec3& x);
		friend Vec3 operator-(const Vec3& n, const Vec3& x);
		Vec3 operator/(int n);
		Vec3 operator*(int n);
		friend bool operator==(const Vec3& n, const Vec3& x);
		friend bool operator!=(const Vec3& n, const Vec3& x);
		Vec3& operator+=(const Vec3& n);
		Vec3& operator-=(const Vec3& n);
		Vec3& operator*=(const Vec3& n);
		Vec3& operator/=(const Vec3& n);
		friend double operator*(const Vec3& n, const Vec3& x);
		double operator[](int n) const;
		static int dohvati_broj() { return counter; } ;

	};
	Vec3& normalizacija(Vec3& n);
}



#endif
