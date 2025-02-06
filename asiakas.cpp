#include "asiakas.h"

asiakas::asiakas() {}

asiakas::asiakas(string n, double lr)
    : kayttotili(n), luottotili(n, lr)
{
    nimi=n;
    cout<<"Asiakas "<<nimi<<" luotu"<<endl;
}

string asiakas::geNimi()
{
    return nimi;
}

void asiakas::showSaldo()
{
    cout<<"Asiakkaan "<<nimi<<" luottotili velka: "<<luottotili.getBalance()<<endl;
    cout<<"Asiakkaan "<<nimi<<" kayttotili saldo: "<<kayttotili.getBalance()<<endl;
}

bool asiakas::talletus(double s)
{
     return kayttotili.deposit(s);

}

bool asiakas::nosto(double s)
{
    return kayttotili.withdraw(s);
}

bool asiakas::luotonMaksu(double s)
{
    return luottotili.deposit(s);
}

bool asiakas::luotonNosto(double s)
{
    return luottotili.withdraw(s);
}

bool asiakas::tiliSiirto(double s, asiakas &saaja)
{
    if(nosto(s)==true){
    if(saaja.talletus(s)==true){
            cout<<s<<" asiakkaalta "<<nimi<<endl;
            return true;
    }
    return false;
    }
    else{
        return false;
    }
}
