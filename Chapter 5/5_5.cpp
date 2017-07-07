#include <iostream>
#include <string>

const int MONTHS = 12;
const std::string MONTH_LITERALS[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                            "jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

int main()
{
    int sales[MONTHS] = {0}, sum = 0;

    for (uint i = 0; i < MONTHS; ++i) {
        std::cout << "Please enter sales amount for " << MONTH_LITERALS[i] << ": ";
        std::cin >> sales[i];
    }

    for (uint i = 0; i < MONTHS; sum += sales[i++]) {
    }

    std::cout << "Totals sales amount is " << sum << std::endl;
    return 0;
}