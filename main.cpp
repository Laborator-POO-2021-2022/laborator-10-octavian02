#include "ferma.hpp"
#include "vaci.hpp"
#include "gaini.hpp"
#include "cai.hpp"
#include "porci.hpp"
#include "capre.hpp"
#include <typeinfo>

int main()
{
    Ferma **v;
    Ferma *aux;
	v = new Ferma*[5];

	v[0] = new Vaci("vaci", 10, "nutret", 30);
	v[1] = new Gaini("gaini", 100, "graunte", 5);
	v[2] = new Cai("cai", 2, "nutret", 8);
	v[3] = new Porci("porci", 8, "graunte", 4, "iarba", 5);
	v[4] = new Capre("capre", 4, "nutret", 4);
	
	for(int i = 0 ; i < 5 ; i ++)
	 v[i]->afisare();

    int s=0, cant_graunte=0, cant_nutret=0, cant_iarba=0;

    for(int i = 0 ; i < 5 ; i ++)
        s = s + v[i]->getCantTot();
    
    cout << "Cantitatea de mancare totala consumata: " << s << " kg" << endl;

    cout <<"Numarul de zile pentru care ajunge mancarea este: " << 2000/s << endl;

    cout <<"Depozitul trebuie umplut de: " << 365/35 + 1 << "ori" << endl;


for(int i = 0 ; i < 5 ; i ++)
{
    cant_nutret = cant_nutret + v[i]->getCant("nutret");
    cant_graunte = cant_graunte + v[i]->getCant("graunte");
    cant_iarba = cant_iarba + v[i]->getCant("iarba");

}

cout << "Cantiatea de nutret consuamta zilnic este " << cant_nutret << "kg"<< endl;
cout << "Cantiatea de iarba consuamta zilnic este " << cant_iarba << "kg" << endl;
cout << "Cantiatea de graunte consuamta zilnic este " << cant_graunte << "kg" << endl <<endl;

cout << "Cantitatea de mancare totala ramasa la finalul anului: " << 20*s << " kg" << endl;
cout << "Cantiatea de nutret ramasa la finalul anului: " << 20*cant_nutret << "kg" << endl;
cout << "Cantiatea de iarba ramasa la finalul anului: " << 20*cant_iarba << "kg" << endl;
cout << "Cantiatea de graunte ramasa la finalul anului: " << 20*cant_graunte << "kg" << endl;

for(int i = 0; i < 5; i++)
		for(int j = i; j <4; j++)
			if(v[i]->getCantTot()<v[j]->getCantTot())
			{
				aux = v[i];
				v[i] = v[j];
				v [j] = aux;

			}
cout <<	endl << "Top 3 consumatori: " << endl;
	for(int i = 0; i < 3; i++)
		cout << v[i]->getNume() << endl;


}