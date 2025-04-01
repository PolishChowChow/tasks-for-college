#include "./Punkt.h"
#include<iostream>
class Kwadrat{
    Punkt wierzcholek;
    double bok;
    public:
    Kwadrat(): wierzcholek() {
        bok = 3;
        std::cout<<"Konstruktor domyslny dla kwadratu "<<std::endl;
    }
    Kwadrat(int x, int y, int bok, std::string nazwa) : wierzcholek(x, y, nazwa){
        this->bok = bok;
        std::cout<<"Konstruktor parametryczny dla kwadratu "<<nazwa<<std::endl;
    }
    ~Kwadrat(){
        std::cout<<"Destruktor Kwadratu"<<std::endl;
    }
};