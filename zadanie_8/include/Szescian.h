#include "Figura.h"
#include "Kwadrat.h"
class Szescian : public Figura{
    public:
        Kwadrat podstawa;
        Szescian(double krawedz_podstawy);
        double oblicz_pole();
};