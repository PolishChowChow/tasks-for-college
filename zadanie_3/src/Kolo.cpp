#include<iostream>
#include "../include/Kolo.h"

Kolo::Kolo(int x, int y, int r){
    this->x = x;
    this->y = y;
    this->r = r;
}

Kolo::~Kolo(){
	std::cout<<"destruktor dla obiektu kolo o parametrach x: "<<x<<", y: "<<y<<", r: "<<r<<std::endl;
}