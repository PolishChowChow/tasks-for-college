#include<iostream>

#pragma once
class Punkt{
    double x, y;
    public:
    Punkt(){
        x = 0;
        y = 0;
        std::cout<<"Konstruktor domyslny o danych (x, y) = ("<<x<<", "<<y<<"): "<<std::endl;
    }
    Punkt(double x, double y, std::string nazwa) : x(x), y(y) {
        std::cout<<"Konstruktor parametryczny o danych (x, y) = ("<<x<<", "<<y<<"): "<<nazwa<<std::endl;
    }
    ~Punkt(){
        std::cout<<"Destruktor Punktu"<<std::endl;
    }
};