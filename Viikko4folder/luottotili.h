#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"
#include <iostream>
using namespace std;

class Luottotili : public Pankkitili
{
public:
    Luottotili();
    Luottotili(string s, double);
    ~Luottotili();
    bool deposit(double d);
    bool withdraw(double w);
protected:
    double luottoraja=0;
};

#endif // LUOTTOTILI_H
