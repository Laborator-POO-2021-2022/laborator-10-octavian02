#include "cai.hpp"

Cai::Cai():nume(NULL), nr_cai(0), tip_mancare(NULL), cantitate_kg(0)
{

}

Cai::Cai(const char* nume, int nr_cai, const char* tip_mancare, int cantitate_kg):nr_cai(nr_cai), cantitate_kg(cantitate_kg)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->tip_mancare = new char[strlen(tip_mancare) + 1];
	strcpy(this->tip_mancare, tip_mancare);

}


void Cai::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de cai: " << nr_cai << endl;
	cout << "Mancare cai: " << tip_mancare << endl;
	cout << "Cantitatea de nutert consumata zilnic este "<< cantitate_kg << " kg" << endl;

}

int Cai::getCantTot()
{
	return cantitate_kg;

}

int Cai::getCant(char *tip)
{
	if(strcmp("nutret",tip)==0)
	    return cantitate_kg;
    return 0;

}

char* Cai::getMancare()
{
	return tip_mancare;

}

char* Cai::getNume()
{
	return nume;

}

Cai::~Cai()
{
	delete []nume;
	delete []tip_mancare;

}