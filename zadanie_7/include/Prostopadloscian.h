#include "Kwadrat.h"

class Prostopadloscian{
    Kwadrat podstawa;
    double wysokosc;
    public:
        Prostopadloscian();
        Prostopadloscian(int x, int y, int krawedz, int wysokosc, std::string nazwa);
        ~Prostopadloscian();
};