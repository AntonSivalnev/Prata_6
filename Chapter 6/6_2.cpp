#include <iostream>
#include <array>

const int DONATIONS_AMOUNT = 10;

int main()
{
    int large = 0;
    double sum = 0, average;
    std::array<double, DONATIONS_AMOUNT> donations = {};

    std::cout << "Please enter " << DONATIONS_AMOUNT << " donations:" << std::endl;

    for (int i = 0; i < DONATIONS_AMOUNT && std::cin >> donations[i]; ++i) {
        sum += donations[i];
    }

    average = sum / DONATIONS_AMOUNT;
    std::cout << "\nAverage donation is: " << average << std::endl;

    for (int i = 0; i < DONATIONS_AMOUNT; ++i) {
        large += (donations[i] > average);
    }

    std::cout << large << " donations are bigger than average." << std::endl;
    return 0;
}