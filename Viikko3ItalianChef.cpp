#include "italianchef.h"
#include <cstdlib>
#include <iostream>
using namespace std;
ItalianChef::ItalianChef(string n):Chef(n){
    chefName=n;
    cout<<"ItalianChef nimelta "<<n<<" luotu"<<"\n";
};

ItalianChef::~ItalianChef(){
    cout<<"ItalianChef "<<chefName<<" tuhottu"<<"\n";
};

int ItalianChef:: makePizza(int num1, int num2){
    int amountOfPizza= (num1/5)<(num2/5) ? num1/5:num2/5;
    cout<<"Saadaan "<<amountOfPizza<<" pitsaa."<<"\n";
    return amountOfPizza;
};


bool ItalianChef::askSecret(string n, int num1, int num2){
    bool rightToPizza;
    flour=num1;
    water=num2;
    if(n==password){
        rightToPizza=true;
        cout<<"Salasana oikein!"<<"\n";
        makePizza(num1, num2);
    }

    else{
    rightToPizza=false;
        cout<<"Salasana vaarin!";
    };
    return rightToPizza;
};
