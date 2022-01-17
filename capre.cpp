#include "capre.hpp"

Capre::Capre():nume(NULL), nr_capre(0), tip_mancare(NULL), cantitate_kg(0)
{

}

Capre::Capre(const char* nume, int nr_capre, const char* tip_mancare, int cantitate_kg):nr_capre(nr_capre), cantitate_kg(cantitate_kg)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);
	
	this->tip_mancare = new char[strlen(tip_mancare) + 1];
	strcpy(this->tip_mancare,tip_mancare);
}

void Capre::afisare()
{
	cout << "Nume: " << nume << endl;
	cout << "Numar de capre: " << nr_capre << endl;
	cout << "Mancare capre: " << tip_mancare << endl;
	cout << "Cantitate de nutret consumata zilnic este " << cantitate_kg << " kg" << endl;

}

int Capre::getCantTot()
{
	return cantitate_kg;

}

int Capre::getCant(char *tip)
{
	if(strcmp("nutret",tip)==0)
	    return cantitate_kg;
    return 0;

}

char* Capre::getMancare()
{
	return tip_mancare;

}

char* Capre::getNume()
{
	return nume;
    
}

Capre::~Capre()
{
	delete []nume;
	delete []tip_mancare;
}