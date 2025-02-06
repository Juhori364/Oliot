#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili();
    Luottotili(string o, double lr);
    virtual bool withdraw(double s) override;
    virtual bool deposit(double s) override;


protected:
    double luottoraja=0;

};

#endif // LUOTTOTILI_H
