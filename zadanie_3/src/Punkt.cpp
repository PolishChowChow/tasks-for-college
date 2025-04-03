#include<iostream>
#include "../include/Punkt.h"

Punkt::Punkt(int x, int y){
    this->x = x;
    this->y = y;
}
Punkt::~Punkt(){
    std::cout<<"destruktor dla obiektu punkt o parametrach x: "<<x<<", y:"<<y<<std::endl;
}