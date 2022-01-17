#ifndef PORCI_HPP
#define PORCI_HPP

#include "ferma.hpp"

class Porci:public Ferma
{
	char *nume;	
	int nr_porci;
	char *tip_mancare1;
	int cantitate1_kg;
	char *tip_mancare2;
	int cantitate2_kg;

public:
	    Porci();
	    Porci(const char*, int, const char*, int, const char*, int);
	 
	    void afisare();
	
	    int getCantTot();
	    int getCant(char *);
	    char* getMancare();
	    char* getNume();

	     ~Porci();
		
};

#endif