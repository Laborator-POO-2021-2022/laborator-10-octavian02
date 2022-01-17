#ifndef CAI_HPP
#define CAI_HPP

#include "ferma.hpp"

class Cai:public Ferma
{
	char *nume;	
	int nr_cai;
	char *tip_mancare;
	int cantitate_kg;
	
public:
		Cai();
		Cai(const char*, int, const char*, int);
		
		void afisare();
		
		int getCantTot();
		int getCant(char *);
		char* getMancare();
		char* getNume();
		
		~Cai();
};

#endif
