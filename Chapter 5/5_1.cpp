#include <iostream>

int main()
{
    int n1, n2, sum = 0;

    std::cout << "Enter first number: ";
    std::cin >> n1;
    std::cout << "Enter second number: ";
    std::cin >> n2;

    for (int i = n1; i <= n2; i++) {
        sum += i;
    }

    std::cout << c;
    std::cout << "Sum for all numbers between " << n1 << " and " << n2 << " is " <<
                 sum << std::endl;
    return 0;
}