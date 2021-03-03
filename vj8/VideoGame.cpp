#include "VideoGame.h"
#include <vector>
#include <string>
#include<fstream>

vector<string> citaj(vector<string>& igre)
{
	string line;
	ifstream myfile("videogames.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			igre.push_back(line);

		}
		myfile.close();
	}
	else
		cout << "Greska u otvaranju filea ";
	return igre;

}