#include "Figura.h"
#include "Kwadrat.h"
class Prostopadloscian : public Figura{
    Kwadrat podstawa1;
    Kwadrat podstawa2;
    double wysokosc;
    public:
        Prostopadloscian(double krawedz_podstawy, double wysokosc): podstawa1(krawedz_podstawy), podstawa2(krawedz_podstawy), wysokosc(wysokosc){}
        double oblicz_pole(){
            return podstawa1.oblicz_pole() + podstawa2.oblicz_pole() + 4 * wysokosc * podstawa1.a;
        }
};