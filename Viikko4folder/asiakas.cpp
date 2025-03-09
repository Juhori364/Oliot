#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"
#include <iostream>

using namespace std;


Asiakas::Asiakas() {}
Asiakas::Asiakas(string n, double luotto):nimi(n){

}


string Asiakas::getNimi(){
    return nimi;
};

//void showSaldo();
//bool talletus(double);
//bool nosto(double);
//bool luotonMaksu(double);
//bool luotonNosto(double);
