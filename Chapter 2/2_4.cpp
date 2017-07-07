#include <iostream>

int convert(int years);

int main()
{
    int years;

    std::cout << "Enter your age in years: ";
    std::cin >> years;
    std::cout << "Your age in months is " << convert(years) << std::endl;
    return 0;
}

int convert(int years)
{
    return years * 12;
}