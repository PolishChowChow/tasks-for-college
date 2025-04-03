#include "../include/Kwadrat.h"

Kwadrat::Kwadrat(): wierzcholek() {
    bok = 3;
    std::cout<<"Konstruktor domyslny dla kwadratu "<<std::endl;
}
Kwadrat::Kwadrat(int x, int y, int bok, std::string nazwa) : wierzcholek(x, y, nazwa){
    this->bok = bok;
    std::cout<<"Konstruktor parametryczny dla kwadratu "<<nazwa<<std::endl;
}
Kwadrat::~Kwadrat(){
    std::cout<<"Destruktor Kwadratu"<<std::endl;
}