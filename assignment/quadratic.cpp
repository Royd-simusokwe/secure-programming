/**
 * name : royd simusokwe
 * ID NO: 403634\10\1
 * programe : secure programing
 * file name : quadratic.cpp
 *
 */
#include <iostream>
#include <cmath>

int main()
{
    int a;
    std::cout << "enter your A value" << std::endl;
    std::cin >> a;

    int b;
    std::cout << "enter your B value" << std::endl;
    std::cin >> b;

    int c;
    std::cout << "enter your C value" << std::endl;
    std::cin >> c;

    double for1 = std::sqrt(pow(b, 2) - (4 * a * c));
    double b_plus = (-b + for1) / (2 * a);
    double b_minus = (-b - for1) / (2 * a);

    std::cout << "your first answer is : " << b_plus << std::endl
              << "your second answer is : " << b_minus;
    return (0);
}