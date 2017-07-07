#include <iostream>

struct candy_bar {
    char name[25];
    float weight;
    int calories;
} snack = {"Mocha Munch", 2.3, 350};

int main()
{
    std::cout << "Snack is named \"" << snack.name << "\", it weights " << snack.weight <<
                 " and it has " << snack.calories << " calories" << std::endl;
}