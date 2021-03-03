#include "Counter.h"

Counter::Counter()
{ 
	PC = 0; XBOX = 0; PS4 = 0; 
}

string Counter::mostFrequentPlatform()
{
	
	for (int i = 0; i < this->niz.size(); i++)
	{
		for (int j = 0; j < this->niz[i]->platform.size(); i++)
		{ 
			if (niz[i]->platform[j] == "PC")
				this->PC++;
			if (niz[i]->platform[j] == "XBOX")
				this->XBOX++;
			if (niz[i]->platform[j] == "PS4	")
				this->PS4++;
		}
	}
	if (this->PC >= this->XBOX && this->PC >= this->PS4)
		return "PC";

	else if (this->XBOX >= this->PC && this->XBOX >= this->PS4)
		return "XBOX";

	else
		return "PS4";

}

void Counter::add(VideoGame *igra)
{
	this->niz.push_back(igra);
}
