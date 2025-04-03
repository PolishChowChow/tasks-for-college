#include<iostream>
#include "../include/Klasa1.h"

Klasa1::Klasa1(int val){
    std::cout<<"Konstruktor domniemany klasy z konstruktorem kopiujacym"<<std::endl;
    liczba = val;
    wsk = new int(val);
}
Klasa1::Klasa1(Klasa1& klasa){
    liczba = klasa.liczba;
    wsk = new int(*klasa.wsk);
    std::cout<<"Konstruktor kopiujacy, adres: "<<wsk<<", liczba: "<<liczba<<std::endl;
}
Klasa1::~Klasa1(){
    std::cout<<"Konstruktor_Kopiujacy: Destrukcja adresu: "<<wsk<<std::endl;
} 