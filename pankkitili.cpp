#include "pankkitili.h"

Pankkitili::Pankkitili()
{

}

Pankkitili::Pankkitili(string s) {
    omistaja=s;
    cout << "Pankktili omistajalle "<<omistaja<<" luotu"<<endl;
}

bool Pankkitili::withdraw(double w)
{
    cout<<omistaja<<" pankkitili withdraw"<<endl;
    if(w>saldo || w<0){
        return false;
    }
    else{
        saldo=saldo-w;
        return true;
    }
}

bool Pankkitili::deposit(double d)
{
    cout<<omistaja<<" pankkitili deposit"<<endl;
    if(d<0){
        return false;
    }
    else{
        saldo=saldo+d;
        return true;
    }
}

double Pankkitili::getBalance()
{

    return saldo;
}
