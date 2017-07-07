#include <iostream>
#include <string>

struct car {
    std::string make;
    int year;
};

int main()
{
    int amount;
    car *catalog;

    std::cout << "How many cars do you wish to catalog? ";
    (std::cin >> amount).get();

    catalog = new car[amount];
    for (int i = 0; i < amount; i++) {
        std::cout << "Car #" << i + 1 << ".\nPlease enter the make: ";
        std::getline(std::cin, catalog[i].make);
        std::cout << "Please enter the year made: ";
        (std::cin >> catalog[i].year).get();
    }

    std::cout << "\nHere is your collection:" << std::endl;
    for (int i = 0; i < amount; i++) {
        std::cout << catalog[i].year << " " << catalog[i].make << std::endl;
    }

    delete [] catalog;

    return 0;
}