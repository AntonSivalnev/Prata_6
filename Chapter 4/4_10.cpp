#include <iostream>
#include <array>

struct candy_bar {
    std::string name;
    float weight;
    int calories;
};

int main()
{
    float average;
    std::array<float, 3> times;

    std::cout << "Please enter first time: ";
    std::cin >> times[0];
    std::cout << "Enter second time: ";
    std::cin >> times[1];
    std::cout << "Enter third time: ";
    std::cin >> times[2];
    average = (times[0] + times[1] + times[2]) / 3;

    std::cout << "You`ve enetered such times: " << times[0] << ", " << times[1] << " and " <<
                 times[2] << "s. Average is: " << average << std::endl;
}