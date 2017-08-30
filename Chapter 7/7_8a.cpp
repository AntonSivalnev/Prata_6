#include <iostream>
#include <string>

const int seasons = 4;
const char *snames[seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double *pa);
void show(double *da);

int main()
{
    double expenses[seasons];

    fill(expenses);
    show(expenses);

    return 0;
}

void fill(double *pa)
{
    for (int i = 0; i < seasons; i++)
    {
        std::cout << "Enter " << snames[i] << " expenses: ";
        std::cin >> pa[i];
    }
}

void show(double *da)
{
    double total = 0.0;

    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++)
    {
        std::cout << snames[i] << ": $" << da[i] << std::endl;
        total += da[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}
