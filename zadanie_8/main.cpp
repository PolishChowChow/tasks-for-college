#include<iostream>
#include"include/Szescian.h"
#include"include/Walec.h"
#include"include/Figura.h"

int main(){
    Figura* wsk;
    wsk = new Szescian(5);
    std::cout<<"Pole szescianu: "<<wsk->oblicz_pole()<<std::endl;
    wsk = new Walec(2, 10);
    std::cout<<"Pole walca: "<<wsk->oblicz_pole();
    // delete wsk;
    return 0;
}