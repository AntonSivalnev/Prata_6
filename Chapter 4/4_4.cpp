#include <iostream>
#include <string>

int main()
{
    std::string first_name, last_name, concat;

    std::cout << "Enter your first name: ";
    std::cin >> first_name;
    std::cout << "Enter your last name: ";
    std::cin >> last_name;

    concat = last_name + ", " + first_name;
    std::cout << "Here’s the information in a single string: " << concat << std::endl;
    return 0;
}