#include <iostream>
#include <array>

const int MAX_FACTORIAL = 100;

int main()
{
    std::array<long double, MAX_FACTORIAL> factorials = {1, 1};

    for (int i = 2; i < MAX_FACTORIAL; ++i) {
        factorials[i] = factorials[i - 1] * i;
    }

    for (int i = 0; i < MAX_FACTORIAL; ++i) {
        std::cout << i << "! ==\t" << factorials[i] << std::endl;
    }
    return 0;
}