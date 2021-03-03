#include "LastOfUs2.h"

LastOfUs2::LastOfUs2()
{
	
}

void LastOfUs2::AddPlatform()
{
	vector<string> str;
	citaj(str);
	string delimiter = "#";
	for (int i = 0; i < str.size(); i++)
	{
		string trenutni = str[i];
		std::size_t found = trenutni.find("LastOfUs2");
		if (found != std::string::npos)
		{
			size_t pos = 0;
			string token;
			while ((pos = trenutni.find(delimiter)) != std::string::npos) {
				token = trenutni.substr(0, pos);
				this->platform.push_back(token);
				trenutni.erase(0, pos + delimiter.length());
				delimiter = ",";
			}
		}
	}
}
