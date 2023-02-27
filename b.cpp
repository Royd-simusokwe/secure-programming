#include <iostream>
#include <cmath>

double a, x, b, c;

int main()
{
    // this should be ax^2 not (ax)^2
    double equation = std::pow(a * x, 2) - (b * x) + c;

    return 0;
}