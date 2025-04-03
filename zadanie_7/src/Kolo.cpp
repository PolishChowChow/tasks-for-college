#include "../include/Kolo.h"

Kolo::Kolo(): srodek() {
    promien = 3;
    std::cout<<"Konstruktor domyslny dla kola "<<std::endl;
}
Kolo::Kolo(int x, int y, int promien, std::string nazwa) : srodek(x, y, nazwa){
    this->promien = promien;
    srodek = Punkt();
    std::cout<<"Konstruktor parametryczny dla kola "<<nazwa<<std::endl;
}
Kolo::~Kolo(){
    std::cout<<"Destruktor Kola"<<std::endl;
}