#include "./Punkt.h"
#include<iostream>
class Kwadrat{
    Punkt wierzcholek;
    double bok;
    public:
        Kwadrat();
        Kwadrat(int x, int y, int bok, std::string nazwa);
        ~Kwadrat();
};