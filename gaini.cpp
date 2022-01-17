#include "gaini.hpp"

Gaini::Gaini():nume(NULL), nr_gaini(0), tip_mancare(NULL), cantitate_kg(0)
{

}

Gaini::Gaini(const char* nume, int nr_gaini, const char* tip_mancare,int cantitate_kg):nr_gaini(nr_gaini), cantitate_kg(cantitate_kg)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->tip_mancare = new char[strlen(tip_mancare) + 1];
	strcpy(this->tip_mancare,tip_mancare);
	
}

void Gaini::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de gaini: " << nr_gaini << endl;
	cout << "Mancare gaini: " << tip_mancare << endl;
	cout << "Cantitatea de graunte consumata zilnic este " << cantitate_kg << " kg" << endl;

}

int Gaini::getCantTot()
{
	return cantitate_kg;

}

int Gaini::getCant(char *tip)
{
	if(strcmp("graunte",tip)==0)
	    return cantitate_kg;
    return 0;

}

char* Gaini::getMancare()
{
	return tip_mancare;

}

char* Gaini::getNume()
{
	return nume;

}

Gaini::~Gaini()
{
	delete []nume;
	delete []tip_mancare;

}
