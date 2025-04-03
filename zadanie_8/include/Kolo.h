#include "Figura.h"
#include <math.h>
class Kolo : public Figura{
    public:
        double promien;
        Kolo(double promien);
        double oblicz_pole();
};