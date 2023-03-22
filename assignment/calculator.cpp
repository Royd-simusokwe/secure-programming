/**
 * name : royd simusokwe
 * ID NO: 403634\10\1
 * file name: calculator.cpp
 * programe : secure programing
 *
 *
 */
#include <iostream>
#include <cmath>

double num1;
double num2;

int main()
{
    char sign;

    std::cout << "enter your number" << std::endl;
    std::cin >> num1;

    std::cout << "enter your operator" << std::endl;
    std::cin >> sign;

    std::cout << "enter your number" << std::endl;
    std::cin >> num2;

    if (sign == '+')
    {
        double ans = num1 + num2;
        std::cout << "your answe is : " << ans;
    }
    else if (sign == '-')
    {
        double ans = num1 - num2;
        std::cout << "your answer is : " << ans;
    }
    else if (sign == '*')
    {
        double ans = num1 * num2;
        std::cout << "your answer is : " << ans;
    }
    else if (sign == '%')
    {
        double ans = int(num1) % int(num2);
        std::cout << "your answer is : " << ans;
    }
    else if (sign == '/')
    {
        double ans = num1 / num2;
        std::cout << "your answer is : " << ans;
    }
    else
    {
        std::cout << "invalid operation";
    }
    return (0);
}