#include "Figura.h"
#include "Kolo.h"
#include <math.h>

class Walec : public Figura{
    public:
        Kolo podstawa1;
        Kolo podstawa2;
        int wysokosc;
        Walec(int wysokosc, int promien);
        double oblicz_pole();
};
