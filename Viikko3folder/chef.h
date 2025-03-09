#ifndef CHEF_H
#define CHEF_H
#include <cstdlib>
#include <iostream>
using namespace std;


class Chef
{
public:
    Chef();
    ~Chef();
    Chef(string n);
    string getName();
    int makeSalad(int num1);
    int makeSoup(int num1);

protected:
     string chefName;



};

#endif // CHEF_H
