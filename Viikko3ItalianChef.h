#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string n);
    ~ItalianChef();
    bool askSecret(string n, int num1, int num2);
private:
    int makePizza(int num1, int num2);
    string password="pizza";
    int flour;
    int water;


};

#endif // ITALIANCHEF_H
