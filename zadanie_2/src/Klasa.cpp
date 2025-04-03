#include<iostream>
#include "../include/Klasa.h"
Klasa::Klasa(int val){
    liczba = val;
    wsk = new int(val);
    std::cout<<"Adres: "<<wsk<<", liczba: "<<liczba<<std::endl;
}
Klasa::~Klasa(){
    std::cout<<"Konstruktor_niekopiujacy Destrukcja obiketu o adresie: "<<wsk<<std::endl;
}