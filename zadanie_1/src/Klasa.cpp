#include<iostream>
#include "../include/Klasa.h"

Klasa::Klasa(){
    std::cout<<"Konstruktor bezparametryczny"<<std::endl;
}
Klasa::Klasa(int a, int b){
    std::cout<<"Konatruktor parametryczny z parametrami: a"<<a<<", b:"<<b<<std::endl;
}
Klasa::~Klasa(){
    std::cout<<"Destruktor!"<<std::endl;
}