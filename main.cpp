#include <iostream>
#include "pankkitili.H"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    asiakas testi("jonne", 1000);
    testi.talletus(400);
    asiakas testi2("Janne", 1000);
    testi.tiliSiirto(300, testi2);
    testi.showSaldo();
    testi2.showSaldo();

};
