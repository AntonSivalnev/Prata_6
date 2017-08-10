#include <iostream>

int main()
{
    int income = 0;
    float taxes;

    while (income >= 0) {
        std::cout << "Enter your income in tvarps: ";
        if (!(std::cin >> income)) {
            break;
        }

    }
    return 0;
}