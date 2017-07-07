#include <iostream>

const float MILES_IN_100KM = 62.14;
const float LITERS_IN_GALLON = 3.875;

int main()
{
    double consumption_lp100km, consumption_mpg;

    std::cout << "Enter your consumption in l/100km: _\b";
    std::cin >> consumption_lp100km;

    consumption_mpg = (MILES_IN_100KM * LITERS_IN_GALLON / consumption_lp100km);

    std::cout << "Your consumption is " << consumption_mpg << " mpg." << std::endl;

    return 0;
}