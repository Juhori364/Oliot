#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>
using namespace std;

class Pankkitili
{
public:
    Pankkitili();
    Pankkitili(string);
    ~Pankkitili();
    double getBalance();
    bool deposit(double d);
    bool withdraw(double w);

protected:
    string omistaja;
    double saldo=0;
};

#endif // PANKKITILI_H
