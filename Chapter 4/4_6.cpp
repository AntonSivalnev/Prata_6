#include <iostream>

struct candy_bar {
    char name[25];
    float weight;
    int calories;
};

int main()
{
    candy_bar snacks[3] =
    {
        {"Nuts", 5.0, 100500},
        {"Snickers", 6.0, 9000},
        {"Mars", 7.0, 666}
    };
    std::cout << "Snack is named \"" << snacks[0].name << "\", it weights " << snacks[0].weight <<
                 " and it has " << snacks[0].calories << " calories" << std::endl;
    std::cout << "Snack is named \"" << snacks[1].name << "\", it weights " << snacks[1].weight <<
                 " and it has " << snacks[1].calories << " calories" << std::endl;
    std::cout << "Snack is named \"" << snacks[2].name << "\", it weights " << snacks[2].weight <<
                 " and it has " << snacks[2].calories << " calories" << std::endl;
}