#include <iostream>
#include <string>

const int seasons = 4;
const char *snames[seasons] = {"Spring", "Summer", "Fall", "Winter"};

struct Expenses {
    double expenses[seasons];
};

void fill(Expenses &pa);
void show(Expenses &da);

int main()
{
    Expenses expenses;

    fill(expenses);
    show(expenses);

    return 0;
}

void fill(Expenses &pa)
{
    for (int i = 0; i < seasons; i++)
    {
        std::cout << "Enter " << snames[i] << " expenses: ";
        std::cin >> pa.expenses[i];
    }
}

void show(Expenses &da)
{
    double total = 0.0;

    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < seasons; i++)
    {
        std::cout << snames[i] << ": $" << da.expenses[i] << std::endl;
        total += da.expenses[i];
    }
    std::cout << "Total Expenses: $" << total << std::endl;
}
