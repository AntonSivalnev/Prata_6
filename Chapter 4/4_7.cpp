#include <iostream>
#include <string>

struct pizza {
    std::string name;
    float diameter;
    float weight;
};

int main()
{
    pizza pizza_33;

    std::cout << "Please enter a name of pizza bakery: ";
    std::getline(std::cin, pizza_33.name);
    std::cout << "Enter a pizza diameter: ";
    std::cin >> pizza_33.diameter;
    std::cout << "Enter a pizza weight: ";
    std::cin >> pizza_33.weight;

    std::cout << "You`re enetered " << pizza_33.name << " bakery, with pizza weigt " <<
                 pizza_33.weight << " kg and diameter " << pizza_33.diameter << " m" << std::endl;

    return 0;
}