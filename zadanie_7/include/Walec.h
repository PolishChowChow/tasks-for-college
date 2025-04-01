#include "Kolo.h"

class Walec{
    Kolo podstawa;
    double wysokosc;
    public:
    Walec(): podstawa(){
        wysokosc = 6;
        std::cout<<"Konstruktor domyslny walec: "<<std::endl;
    } 
    Walec(int x, int y, int promien, int wysokosc, std::string nazwa) : podstawa(x, y, promien, nazwa) {
        this->wysokosc = wysokosc;
        std::cout<<"Konstruktor parametryczny walec: "<<nazwa<<std::endl;
    }
    ~Walec(){
        std::cout<<"Destruktor Walca"<<std::endl;
    }
};