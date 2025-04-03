#include<iostream>

#pragma once
class Punkt{
    double x, y;
    public:
        Punkt();
        Punkt(double x, double y, std::string nazwa);
        ~Punkt();
};