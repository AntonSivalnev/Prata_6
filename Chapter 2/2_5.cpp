#include <iostream>

float convert(float celsius);

int main()
{
    float celsius;

    std::cout << "Please enter a Celsius value: ";
    std::cin >> celsius;
    std::cout << celsius << " degrees Celsius is "
              << convert(celsius) << " degrees Fahrenheit." << std::endl;
    return 0;
}

float convert(float celsius)
{
    return celsius * 1.8 + 32.0;
}