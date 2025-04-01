#include <iostream>

class Zespolona {
public:
    double u;   
    double r;   
    Zespolona(double r, double u) : r(r), u(u) {}

    void wyswietl() {
        std::cout<<r<<"+"<<u<<"i"<<std::endl;
    }

    Zespolona operator+(const Zespolona& liczba) const {
        return Zespolona(r + liczba.r, u + liczba.u);
    }

    Zespolona& operator++() {
        r++;
        u++;
        return *this;
    }
};

Zespolona operator-(const Zespolona& c) {
    return Zespolona(-c.r, -c.u);
}


Zespolona operator*(const Zespolona& c1, const Zespolona& c2) {
    return Zespolona(c1.r * c2.r - c1.u * c2.u,
                   c1.r * c2.u + c1.u * c2.r);
}

int main() {
    Zespolona c1(3.0, 4.0);
    Zespolona c2(1.0, 2.0);
    Zespolona c3 = c1 + c2;
    Zespolona c4 = c1 * c2;
    Zespolona c5 = -c1;
    ++c2;

    c1.wyswietl();
    c2.wyswietl();
    c3.wyswietl();
    c4.wyswietl();
    c5.wyswietl();

    return 0;
}
