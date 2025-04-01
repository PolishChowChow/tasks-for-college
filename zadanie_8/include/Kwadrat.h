#include "Figura.h"
class Kwadrat : public Figura{
    public:
    double a;
    Kwadrat(double a): a(a){};
    double oblicz_pole(){
        return a * a;
    };
};