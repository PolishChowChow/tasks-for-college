#include "Kwadrat.h"

class Prostopadloscian{
    Kwadrat podstawa;
    double wysokosc;
    public:
    Prostopadloscian(): podstawa(){
        wysokosc = 6;
        std::cout<<"Konstruktor domyslny prostopadloscian: "<<std::endl;
    } 
    Prostopadloscian(int x, int y, int krawedz, int wysokosc, std::string nazwa) : podstawa(x, y, krawedz, nazwa) {
        this->wysokosc = wysokosc;
        std::cout<<"Konstruktor parametryczny prostopadloscian: "<<nazwa<<std::endl;
    }
    ~Prostopadloscian(){
        std::cout<<"Destruktor Prostopadloscianu"<<std::endl;
    }
};