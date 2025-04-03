#include "../include/Walec.h"

Walec::Walec(int wysokosc, int promien): wysokosc(wysokosc), podstawa1(promien), podstawa2(promien) {}

double Walec::oblicz_pole(){
    return podstawa1.oblicz_pole() + podstawa2.oblicz_pole() + 2 * M_1_PI * podstawa1.promien;
}