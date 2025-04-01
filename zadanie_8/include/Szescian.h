#include "Figura.h"
#include "Kwadrat.h"
class Szescian : public Figura{
    Kwadrat podstawa;
    public:
    Szescian(double krawedz_podstawy): podstawa(krawedz_podstawy) {}
        double oblicz_pole(){
            return 6 * podstawa.oblicz_pole();
        }
};