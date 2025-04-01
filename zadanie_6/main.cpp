#include <iostream>
#include "include/Counter.h"
#include "include/Choinka.h"

int main() {
    int rowsCounter;
    do{
        std::cout<<"Podaj liczbe wierszy(wieksza od 2): "<<std::endl;
        std::cin>>rowsCounter;
        if(rowsCounter <= 2){
            std::cout<<"Nieprawidlowa liczba wierszy"<<std::endl;
        }
    }while(rowsCounter <= 2);
    int rows = Counter::sizeCounter(rowsCounter);
    int W = rowsCounter - 2;

    Choinka segment1(rows, 1, rowsCounter + 1);
    Choinka segment2(rows, 1 + W, rowsCounter + rowsCounter + 1);
    Choinka segment3(rows, 1 + W + W, rowsCounter + rowsCounter + 1 + W);

    segment1.wyswietl_plat();
    segment2.wyswietl_plat();
    segment3.wyswietl_plat();
    segment2.wyswietl_stopke(rowsCounter);
    return 0;
}
