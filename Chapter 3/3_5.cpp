#include <iostream>

int main()
{
    long long world, u_s;
    long double fraction;

    std::cout << "Enter the world's population: _\b";
    std::cin >> world;
    std::cout << "Enter the population of the US: _\b";
    std::cin >> u_s;

    fraction = ((long double)(u_s) / world) * 100;

    std::cout << "The population of the US is " << fraction << "% of the world population." <<
                 std::endl;

    return 0;
}