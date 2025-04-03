#include "Kolo.h"

class Walec{
    Kolo podstawa;
    double wysokosc;
    public:
        Walec();
        Walec(int x, int y, int promien, int wysokosc, std::string nazwa);
        ~Walec();
};