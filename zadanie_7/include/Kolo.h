#include "Punkt.h"

class Kolo{
    Punkt srodek;
    double promien;
    public:
        Kolo();
        Kolo(int x, int y, int promien, std::string nazwa);
        ~Kolo();
};