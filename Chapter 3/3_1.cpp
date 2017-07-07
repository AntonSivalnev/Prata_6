#include <iostream>

const int INCH_IN_FOOT = 12;

int main()
{
    int inches;

    std::cout << "Enter your height in inches: _\b";
    std::cin >> inches;

    std::cout << "Your height is " << inches / INCH_IN_FOOT << " feet and " <<
                 inches % INCH_IN_FOOT << " inches";
    return 0;
}