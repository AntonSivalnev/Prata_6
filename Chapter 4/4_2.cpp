#include <iostream>
#include <string>

int main()
{
    std::string name, dessert;

    std::cout << "Enter your name:" << std::endl;;
    std::cin >> name;
    std::cout << "Enter your favorite dessert:" << std::endl;
    std::cin >> dessert;
    std::cout << "I have some delicious " << dessert;
    std::cout << " for you, " << name << "." << std::endl;

    return 0;
}