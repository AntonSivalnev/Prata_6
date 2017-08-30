#include <iostream>

double harmonic_mean(int num1, int num2);

int main()
{
    int num1, num2;

    std::cout << "Enter 2 numbers:" << std::endl;
    std::cin >> num1;
    std::cin >> num2;

    while (num1 && num2) {
        std::cout << "Harmonic mean of the " << num1 << " and " << num2 << " is: "
                  << harmonic_mean(num1, num2) << std::endl;
        std::cout << "\nEnter 2 numbers:" << std::endl;
        std::cin >> num1;
        std::cin >> num2;
    }

    return 0;
}


double harmonic_mean(int num1, int num2)
{
    return 2.0 * num1 * num2 / (num1 + num2);
}