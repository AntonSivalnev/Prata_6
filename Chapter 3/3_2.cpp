#include <iostream>

const int INCH_IN_FOOT = 12;
const float INCH_IN_METER = 0.0254;
const float KILOGRAM_IN_POUND = 2.2;

int main()
{
    int feet, inches, pounds;
    float meters, kilograms, body_mass_index;

    std::cout << "Enter your height in feet: _\b";
    std::cin >> feet;
    std::cout << "And inches: _\b";
    std::cin >> inches;
    std::cout  "\nEnter your weight in pounds: _\b";
    std::cin >> pounds;

    meters = (feet * INCH_IN_FOOT + inches) * INCH_IN_METER;
    kilograms = pounds / KILOGRAM_IN_POUND;

    body_mass_index = kilograms / (meters * meters);

    std::cout << "Your height is " << meters << " meters, your weight is " << kilograms <<
                 " kilograms and you body mass index is " << body_mass_index << std::endl;
    return 0;
}