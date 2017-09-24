#include <iostream>
#include <cstring>

const int max_str_len = 25;

struct CandyBar {
    char* name;
    double weight;
    int calories;
};

void set_candy_bar(CandyBar &candy_bar, const char *name="Millennium Munch",
                   double weight=2.85, int calories=350);
void print_candy_bar(const CandyBar &candy_bar);

int main()
{
    CandyBar candy_bar;
    char *name = new char[max_str_len];
    double weight;
    int calories;

    std::cout << "Please enter Candy Bar name: ";
    std::cin.getline(name, max_str_len);
    std::cout << "Enter Candy Bar weight: ";
    std::cin >> weight;
    std::cout << "How many calories does it have? ";
    std::cin >> calories;
    std::cout << std::endl;

    set_candy_bar(candy_bar);
    print_candy_bar(candy_bar);
    set_candy_bar(candy_bar, name);
    print_candy_bar(candy_bar);
    set_candy_bar(candy_bar, name, weight);
    print_candy_bar(candy_bar);
    set_candy_bar(candy_bar, name, weight, calories);
    print_candy_bar(candy_bar);

    delete[] name;
    return 0;
}

void set_candy_bar(CandyBar &candy_bar, const char *name, double weight, int calories)
{
    strncpy(candy_bar.name, name, max_str_len);
    candy_bar.weight = weight;
    candy_bar.calories = calories;
}

void print_candy_bar(const CandyBar &candy_bar)
{
    std::cout << candy_bar.name << " weights " << candy_bar.weight << "g and contains " <<
                 candy_bar.calories << " calories" << std::endl;
}