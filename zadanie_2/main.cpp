#include<iostream>
#include "Klasa.h"
#include "Klasa1.h"

int main(){
	Klasa obiekt(1);
	Klasa1 obiekt1(2);
	Klasa kopia_bez_konstruktora_kopiujacego = obiekt;
	Klasa1 kopia_z_konstruktorem_kopiujacym = obiekt1;
	std::cout<<"Jak widzimy, obiekt skopiowany bez konstruktora kopiujacego zachowuje w zmiennej wsk wskaznik do tej samej zmiennej co obiekt z ktorego jest kopiowany co spowoduje wyrzucenie bledu podczas proby wywolania funkcji delete() w destruktorze"<<std::endl;
	std::cout<<"Z kolei konstruktor kopiujacy zapewnia kopiowanie obiektu, lecz nie adresu wiec mozemy bezpiecznie wykonywac wszelkie operacje na jego kopii utworzonej z pomoca konstruktora kopiujacego";
	return 0;
}
