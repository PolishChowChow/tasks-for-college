#include "Figura.h"
#include <math.h>
class Kolo : public Figura{
    public:
    double promien;
    Kolo(double promien): promien(promien) {}
    double oblicz_pole(){
        return M_1_PI * promien * promien;
    }
};