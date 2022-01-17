#include "vaci.hpp"

Vaci::Vaci():nume(NULL), nr_vaci(0), tip_mancare(NULL), cantitate_kg(0)
{

}

Vaci::Vaci(const char* nume, int nr_vaci , const char* tip_mancare, int cantitate_kg):cantitate_kg(cantitate_kg),nr_vaci(nr_vaci)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->tip_mancare = new char[strlen(tip_mancare) + 1];
	strcpy(this->tip_mancare,tip_mancare);

}

void Vaci::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de vaci: " << nr_vaci << endl;
	cout << "Mancare vaci: " << tip_mancare <<endl;
	cout << "Cantitatea de nutret consumata zilnic este " << cantitate_kg << " kg" << endl;

}

int Vaci::getCantTot()
{
	return cantitate_kg;

}

int Vaci::getCant(char *tip)
{
    if(strcmp("nutret",tip)==0)
	    return cantitate_kg;
    return 0;

}

char* Vaci::getMancare()
{
	return tip_mancare;

}

char* Vaci::getNume()
{
	return nume;

}

Vaci::~Vaci()
{
	delete []nume;
	delete []tip_mancare;

}
