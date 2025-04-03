#include "../include/Kolo.h"

Kolo::Kolo(double promien): promien(promien) {}

double Kolo::oblicz_pole(){
    return M_1_PI * promien * promien;
}