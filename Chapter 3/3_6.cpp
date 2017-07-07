#include <iostream>

int main()
{
    int kilometers, liters;
    float consumption;

    std::cout << "Enter how many kilometers you have driven: _\b";
    std::cin >> kilometers;
    std::cout << "EEnter how many liters of petrol you have used: _\b";
    std::cin >> liters;

    consumption = ((float)(liters) / kilometers * 100);

    std::cout << "Your petrol consumption is " << consumption << " l/100 km." << std::endl;

    return 0;
}