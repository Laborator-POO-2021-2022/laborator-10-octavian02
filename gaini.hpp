#ifndef GAINI_HPP
#define GAINI_HPP

#include "ferma.hpp"

class Gaini:public Ferma
{
	char *nume;
	int nr_gaini;
	char *tip_mancare;
	int cantitate_kg;
	
public:
		Gaini();
		Gaini(const char*, int, const char*, int);
		
		void afisare();
		
		int getCantTot();
		int getCant(char *);
		char* getMancare();
		char* getNume();

		~Gaini();
};

#endif