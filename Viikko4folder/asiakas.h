#ifndef ASIAKAS_H
#define ASIAKAS_H
#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"
#include <iostream>

using namespace std;


class Asiakas
{
public:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
    Asiakas();
    Asiakas(string, double);
    string getNimi();
    void showSaldo();
    bool talletus(double);
    bool nosto(double);
    bool luotonMaksu(double);
    bool luotonNosto(double);


};

#endif // ASIAKAS_H
