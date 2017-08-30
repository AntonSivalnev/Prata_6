#include <iostream>

long long factorial(unsigned int number);

int main()
{
    unsigned int number;

    std::cout << "Enter a positive number: ";
    std::cin >> number;

    std::cout << "Factorial of " << number << " is " << factorial(number);
    return 0;
}

long long factorial(unsigned int number)
{
    return number == 0 ? 1 : factorial(number - 1) * number;
}