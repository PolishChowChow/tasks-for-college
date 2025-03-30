#include<iostream>
#include "Klasa.h"
int main(){
	Klasa prezentacja_klasy_1;
	Klasa prezentacja_klasy_2(1, 2);
	Klasa* wsk1;
	Klasa* wsk2;
	wsk1 = new Klasa();
	wsk2 = new Klasa(3,4);

	
	return 0;
}
