#ifndef CAPRE_HPP
#define CAPRE_HPP

#include "ferma.hpp"

class Capre:public Ferma
{
	char *nume;
	int nr_capre;
	char *tip_mancare;
	int cantitate_kg;
	
public:
		Capre();
		Capre(const char*, int, const char*, int);
		
		void afisare();

		int getCantTot();
		int getCant(char *);
		char* getMancare();
		char* getNume();
		
		~Capre();
};

#endif
