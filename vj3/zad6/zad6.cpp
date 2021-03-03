#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void print_vector(vector<string> vec)
{
	vector<string>::iterator it;
	for ( it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << endl;
	}
}
bool provjeri_slovo(string& str)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (!isalpha(str[i]))
			return false;  
	}
	return true;
}
bool provjeri(string novi)
{
	if (novi.size() > 20)
		return false;
	for (int i = 0; i < novi.size(); i++)
	{
		if (!isdigit(novi[i]))
		{
			if (islower(novi[i]))
			{
				cout << "ne zadovoljava uvjet" << endl;
				return false;
			}
		}
	}
}
int count(string &s, char c)
{
	int brojac = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == c)
			brojac++;
	}
	return brojac;
}
void transformiraj_slova(string& str)
{
	int brojac;
	for (int i = 0; i<str.length(); i++)
	{
		brojac=count(str, str[i]);
		char c = str.at(i);
		if (brojac > 1)
		{
			str.erase(i, brojac);
			string broj = to_string(brojac);
			str.insert(i, broj);
			str.insert(str.begin() + i + 1, c);
			i++;
		}
		
	}
}
void transformiraj_brojeve(string& str)
{
	int brojac = 1;
	char c;
	for (int i = 0; i < str.size(); i++)
	{
		if (isalnum(str[i]) && isalpha(str[i + 1]))
		{
			c = str.at(i + 1);
			int broj = str.at(i) - '0';
			str.erase(i, 1);
			str.insert(i,broj-1 ,c);
			i += broj - 1;
		}
	}
}
int main()
{
	int N;
	cout << "Koliko stringova zelite unijeti? " << endl;
	cin >> N;
	vector<string> vec(N);
	cout << "Unesite vase stringove:" << endl;
	int i = 0;
	while (i < N) {
		string novi;
		cin >> novi;
		while (!provjeri(novi)) {
			cout << "String moze imati najvise 20 znakova (brojevi ili/i velika slova)\n" <<
				"Unesite ponovno: " << endl;
			cin >> novi;
		}
		vec[i]=novi;
		i++;
	}
	for (i = 0; i < vec.size(); i++) {
		if (!provjeri_slovo(vec[i])) {
			transformiraj_slova(vec[i]);
		}
		else{
			transformiraj_brojeve(vec[i]);
		}
	}
	print_vector(vec);
	int test;
	cin >> test;
}