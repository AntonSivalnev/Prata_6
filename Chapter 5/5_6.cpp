#include <iostream>
#include <string>

const int MONTHS = 12;
const int YEARS = 3;
const std::string MONTH_LITERALS[MONTHS] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                                            "jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

int main()
{
    int sales[YEARS][MONTHS] = {0}, sum = 0;

    for (int i = 0; i < YEARS; ++i) {
        for (int j = 0; j < MONTHS; ++j) {
            std::cout << "Please enter sales amount for " << i + 1<< " year (" <<
                         MONTH_LITERALS[j] << "): ";
            std::cin >> sales[i][j];
        }
    }

    for (int i = 0, year_sum; i < YEARS; ++i) {
        year_sum = 0;
        for (int j = 0; j < MONTHS; year_sum += sales[i][j++]) {
        }
        sum += year_sum;
        std::cout << "Sales amount during " << i + 1 << " year is " << year_sum << std::endl;
    }

    std::cout << "\nTotals sales amount is " << sum << std::endl;
    return 0;
}