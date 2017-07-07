#include <iostream>

double convert(float light_years);

int main()
{
    float light_years;

    std::cout << "Enter the number of light years: ";
    std::cin >> light_years;
    std::cout << light_years << " light years = "
              << convert(light_years) << " astronomical units." << std::endl;
    return 0;
}

double convert(float light_years)
{
    return light_years * 63241.077;
}