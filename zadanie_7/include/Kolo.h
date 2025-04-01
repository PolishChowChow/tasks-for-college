#include "Punkt.h"

class Kolo{
    Punkt srodek;
    double promien;
    public:
    Kolo(): srodek() {
        promien = 3;
        std::cout<<"Konstruktor domyslny dla kola "<<std::endl;
    }
    Kolo(int x, int y, int promien, std::string nazwa) : srodek(x, y, nazwa){
        this->promien = promien;
        srodek = Punkt();
        std::cout<<"Konstruktor parametryczny dla kola "<<nazwa<<std::endl;
    }
    ~Kolo(){
        std::cout<<"Destruktor Kola"<<std::endl;
    }
};