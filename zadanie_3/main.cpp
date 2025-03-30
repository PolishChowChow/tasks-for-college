#include<iostream>
#include<math.h>
#include "Punkt.h"
#include "Kolo.h"

bool isPunktWKole(Punkt &punkt, Kolo &kolo){
	int odleglosc_pomiedzy_punktami = sqrt(pow(punkt.x - kolo.x, 2) * pow(punkt.y - kolo.y, 2));
	return kolo.r >= odleglosc_pomiedzy_punktami;
}
int main(){
	int x, y, xx, yy, r = 0;
	std::cout<<"Podaj wspolrzedna punktu x:"<<std::endl;
	std::cin>>x;
	std::cout<<"Podaj wspolrzedna punktu y:"<<std::endl;
	std::cin>>y;
	std::cout<<"Podaj wspolrzedna srodka kola x:"<<std::endl;
	std::cin>>xx;
	std::cout<<"Podaj wspolrzedna srodka kola y:"<<std::endl;
	std::cin>>yy;
	do{
		std::cout<<"Podaj promien rozny od zera: ";
		std::cin>>r;
	}while(r == 0);
	Punkt punkt(x, y);
	Kolo kolo(xx, yy, r);
	if(isPunktWKole(punkt, kolo)){
		std::cout<<"Punkt nalezy do kola";
	}
	else{
		std::cout<<"Punkt nie nalezy do kola";
	}
	return 0;
}
