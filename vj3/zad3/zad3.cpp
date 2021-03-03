
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
void filtriraj(string str) {
	string interpunkcija = ".,?!:;-""()/";
	for (int i = 0; interpunkcija[i] !='\0'; i++)
	{
		for (int j = 0; str[j] != '\0';j++)
		{
			if (interpunkcija[i] == str[j+1])
			{
				
				str.erase(j, 1);
				str.insert(j + 1, " ");
			}
		}
	}
	cout << str;
}
int main()
{

	string str = "alo ,alo ,idemo";
	filtriraj(str);
	
}

