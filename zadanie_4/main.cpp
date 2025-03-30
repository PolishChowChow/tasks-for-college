#include<iostream>
#include "Klasa.h"


void testowa_funkcja(Klasa* klasa){
	std::cout<<"wartosc parametru x dla obiektu: "<<klasa->x<<std::endl;
}
int main(){
	Klasa klasa;
	Klasa klasa2 = klasa;
	testowa_funkcja(&klasa);
	testowa_funkcja(&klasa2);
	std::cout<<"1. tak, funkcja zaprzyjazniona jest kopiowana wraz z obiektem, widizmy to po tym, ze dziala ona zarowno dla obu obiektow majac dostep do prywatnych atrybutow (w tym przypadku int x)"<<std::endl;
	std::cout<<"2. nie, nie wymaga, powyzszy przyklad prezentuje nie uzycie konstruktora kopiujacego"<<std::endl;
	std::cout<<"3. nie, konstruktor jak widzimy uruchamia sie tylko raz, dla oryginalu"<<std::endl;
	return 0;
}
