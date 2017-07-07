#include <iostream>

int main()
{
    int sum = 0, temp = 0;

    do {
        std::cout << "Please enter a number: ";
        std::cin >> temp;

        std::cout << "Current sum is: " << (sum += temp) << std::endl;
    } while (temp);
}