#include "Witcher3.h"
#include "VideoGame.h"
Witcher3::Witcher3()
{
	type = "OpenWorld-RPG";
}

void Witcher3::AddPlatform()
{
	vector<string> str;
	citaj(str);
	string delimiter = "#";
	for (int i=0; i<str.size();i++)
	{
		string trenutni = str[i];
		std::size_t found = trenutni.find("Witcher3");
		if (found != std::string::npos)
		{
			size_t pos = 0;
			string token;
			while ((pos = trenutni.find(delimiter)) != std::string::npos) {
				token = trenutni.substr(0, pos);
				this->SetPlatform(token);
				trenutni.erase(0, pos + delimiter.length());
				delimiter = ",";
			}
		}
	}
}

void Witcher3::SetPlatform(string str)
{
	this->SetPlatform(str);
}

