#include "../include/Choinka.h"

Choinka::Choinka(int rows, int start, int limiter){
    this->rows = rows;
    this->start = start;
    this->limiter = limiter;
}
void Choinka::wyswietl_plat(){
    for(int i = 1; i < limiter; i++){
        if(i < this->start){
            continue;
        }
        for(int j = 1; j < this->rows - i; j++){
            std::cout<<" ";
        }
        for(int k = 1; k < 2 * i; k++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}
void Choinka::wyswietl_stopke(int liczba){
    for(int i = 0; i < liczba; i++){
        for(int i = 2; i < this->rows; i++){
            std::cout<<" ";
        }
        std::cout<<"|"<<std::endl;
    }
}