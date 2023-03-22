#include <iostream>

int main()
{
    int grade;
    int acount = 0;
    int bcount = 0;
    int ccount = 0;
    int dcount = 0;
    int fcount = 0;

    std::cout << "Enter the letter grades." << std::endl
              << "Enter the EOF character to end input. " << std::endl;

    while ((grade = std::cin.get()) != EOF)
    {
        switch (grade)
        {
        case 'a':
        case 'A':
            ++acount;
            break;
        case 'b':
            ++bcount;
            break;
        case 'c':
            ++ccount;
            break;
        case 'd':
            ++dcount;
            break;
        case 'f':
            ++fcount;
            break;
        }
    }
    std::cout << "this is grade" << grade << std::endl;

    std::cout << "\n\nTotals for letter grade are:"
              << "\nA: " << acount
              << "\nB: " << bcount
              << "\nC: " << ccount
              << "\nD: " << dcount
              << "\nF: " << fcount
              << std::endl;

    return 0;
}