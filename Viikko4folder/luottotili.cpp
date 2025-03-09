#include "luottotili.h"
#include "pankkitili.h"
#include <iostream>
using namespace std;

Luottotili::~Luottotili(){
    cout<<"Luottotili destructor"<<"\n";
};
Luottotili::Luottotili() {
    cout<<"Luottotili default constructor"<<"\n";
};

Luottotili::Luottotili(string s, double l) {
    omistaja=s;
    luottoraja=l;
    cout<<"Asiakkaan "<<omistaja<<" luottotili luotu"<<"\n";
}
