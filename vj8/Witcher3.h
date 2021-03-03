#ifndef WITCHER3_H
#define WITCHER3_H

#include<iostream>
#include <string>
#include"RPG.h"
#include "OpenWorld.h"
using namespace std;

class Witcher3 :  public RPG , public OpenWorld
{
	protected:
		
	public:
		Witcher3();
		void AddPlatform();
		void SetPlatform(string str);	
};
#endif