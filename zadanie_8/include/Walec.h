#include "Figura.h"
#include "Kolo.h"
#include <math.h>

class Walec : public Figura{
    Kolo podstawa1;
    Kolo podstawa2;
    int wysokosc;
    public:
    Walec(int wysokosc, int promien): wysokosc(wysokosc), podstawa1(promien), podstawa2(promien) {}
    double oblicz_pole(){
        return podstawa1.oblicz_pole() + podstawa2.oblicz_pole() + 2 * M_1_PI * podstawa1.promien;
    }
};
