#include "../include/Szescian.h"

Szescian::Szescian(double krawedz_podstawy): podstawa(krawedz_podstawy) {}

double Szescian::oblicz_pole(){
    return 6 * podstawa.oblicz_pole();
}