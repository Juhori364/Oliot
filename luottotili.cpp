#include "luottotili.h"
#include "pankkitili.h"

Luottotili::Luottotili() {}

Luottotili::Luottotili(string o, double lr) : Pankkitili(o)
{
    omistaja=o;
    cout<<"Luottotili omistajalle "<<omistaja<<" luotu"<<endl;
    luottoraja=lr;
}

bool Luottotili::withdraw(double s)
{
    cout<<"luottotili withdraw"<<endl;
    if(s<0){
        return false;
    }
    else if(luottoraja<saldo+s){
        cout<<"luottoraja paukkuu"<<endl;
        return false;
    }
    else{
        cout<<"withdraw onnistui"<<endl;
        saldo=saldo+s;
        return true;
    }
}

bool Luottotili::deposit(double s)
{
    if(s<0 || (saldo-s)<0){
        return false;
    }



    else{
        saldo=saldo-s;
        return true;
    }
}

