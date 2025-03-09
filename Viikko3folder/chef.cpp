#include "chef.h"
#include <cstdlib>
#include <iostream>
using namespace std;
Chef::Chef(){
    chefName="testi";
};
Chef::~Chef(){
    cout<<"Chef "<<chefName<< " tuhottu"<<"\n";
};

Chef::Chef(string n) {
    chefName=n;
    cout<<"Chef "<<chefName<<" luotu"<<"\n";
};

string Chef::getName(){
    return chefName;
};

int Chef::makeSalad(int num1){
    cout<<"Chef Salaatti";
    int portions=num1/5;
    return portions;
};

int Chef::makeSoup(int num1){
    cout<<"Chef soppa";
    int portions=num1/3;
    return portions;
};


