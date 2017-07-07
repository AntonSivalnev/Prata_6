#include <iostream>
#include <string>

struct candy_bar {
    std::string name;
    float weight;
    int calories;
};

int main()
{
    candy_bar *snacks = new candy_bar[3];
    snacks[0].name = "Nuts";
    snacks[0].weight = 5.0;
    snacks[0].calories = 100500;
    snacks[1].name = "Snickers";
    snacks[1].weight = 6.0;
    snacks[1].calories = 9000;
    snacks[2].name = "Mars";
    snacks[2].weight = 7.0;
    snacks[2].calories = 666;

    std::cout << "Snack is named \"" << snacks[0].name << "\", it weights " << snacks[0].weight <<
                 " and it has " << snacks[0].calories << " calories" << std::endl;
    std::cout << "Snack is named \"" << snacks[1].name << "\", it weights " << snacks[1].weight <<
                 " and it has " << snacks[1].calories << " calories" << std::endl;
    std::cout << "Snack is named \"" << snacks[2].name << "\", it weights " << snacks[2].weight <<
                 " and it has " << snacks[2].calories << " calories" << std::endl;

    delete [] snacks;
}