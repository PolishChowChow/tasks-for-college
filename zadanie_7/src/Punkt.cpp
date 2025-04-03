#include "../include/Punkt.h"

Punkt::Punkt(){
    x = 0;
    y = 0;
    std::cout<<"Konstruktor domyslny o danych (x, y) = ("<<x<<", "<<y<<"): "<<std::endl;
}
Punkt::Punkt(double x, double y, std::string nazwa) : x(x), y(y) {
    std::cout<<"Konstruktor parametryczny o danych (x, y) = ("<<x<<", "<<y<<"): "<<nazwa<<std::endl;
}
Punkt::~Punkt(){
    std::cout<<"Destruktor Punktu"<<std::endl;
}