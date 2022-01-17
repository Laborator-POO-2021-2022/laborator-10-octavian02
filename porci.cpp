#include "Porci.hpp"

Porci::Porci():nume(NULL), nr_porci(0), tip_mancare1(NULL), cantitate1_kg(0), tip_mancare2(NULL), cantitate2_kg(0){}

Porci::Porci(const char* nume, int nr_porci, const char* tip_mancare1 ,int cantitate1_kg , const char* tip_mancare2, int cantitate2_kg):nr_porci(nr_porci), cantitate1_kg(cantitate1_kg), cantitate2_kg(cantitate2_kg)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->tip_mancare1 = new char[strlen(tip_mancare1) + 1];
	strcpy(this->tip_mancare1,tip_mancare1);
	
	this->tip_mancare2 = new char[strlen(tip_mancare2) + 1];
	strcpy(this->tip_mancare2,tip_mancare2);
	
}


void Porci::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de porci: " << nr_porci << endl;
	cout << "Primul tip de mancare: " << tip_mancare1 << endl;
	cout << "Cantitatea de graunte consumata zilnic este " << cantitate1_kg << " kg" << endl;
	cout << "Al doilea tip de mancare " << tip_mancare2 << endl;
	cout << "Cantitate de iarba mancata zilnic este " << cantitate2_kg << " kg" << endl;

}

int Porci::getCantTot()
{
	return cantitate1_kg + cantitate2_kg;
}

int Porci::getCant(char *tip)
{
	if(strcmp(tip,"graunte") == 0)
	   return cantitate1_kg;
	else
	 if(strcmp(tip,"iarba") == 0)
	   return cantitate2_kg;
    return 0;

}

char* Porci::getMancare()
{
	if(strcmp(tip_mancare1,"graunte") == 0)
	    return tip_mancare1;
	else
	 if(strcmp(tip_mancare2,"iarba") == 0)
	  return tip_mancare2;

}

char* Porci::getNume()
{
	return nume;

}

Porci::~Porci()
{
	delete []nume;
	delete []tip_mancare1;
	delete []tip_mancare2;

}
