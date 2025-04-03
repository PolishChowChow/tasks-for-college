#include<iostream>
#include "include/Klasa.h"


void testowa_funkcja(Klasa* klasa){
	std::cout<<"wartosc parametru x dla obiektu: "<<klasa->x<<std::endl;
}
int main(){
	Klasa klasa;
	Klasa klasa2 = klasa;
	testowa_funkcja(&klasa);
	testowa_funkcja(&klasa2);
	std::cout<<"1. Tak, funkcja zaprzyjazniona jest kopiowana wraz z obiektem, widizmy to po tym, ze dziala ona zarowno dla obu obiektow majac dostep do prywatnych atrybutow (w tym przypadku int x)"<<std::endl;
	std::cout<<"2. Nie, nie wymaga, powyzszy przyklad prezentuje nie uzycie konstruktora kopiujacego w celu skopiowania obiektu i faktycznie wartosc ma ta sama."<<std::endl;
	std::cout<<"3. Nie, konstruktor jak widzimy uruchamia sie tylko raz, dla oryginalu"<<std::endl;
	return 0;
}
