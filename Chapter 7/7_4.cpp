#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned numbers2);

int main()
{
    double total, choices, total2;

    std::cout << "Enter the total number of choices on the game card,\n"
                 "the number of picks allowed and number of choices in second pick:\n";
    while ((std::cin >> total >> choices >> total2) && choices <= total)
    {
        std::cout << "You have one chance in ";
        std::cout << probability(total, choices, total2);
        std::cout << " of winning.\n";
        std::cout << "Next three numbers (q to quit): ";
    }
    std::cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned numbers2)
{
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result *  numbers2;
}
