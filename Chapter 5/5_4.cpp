#include <iostream>

int main()
{
    int years = 0;
    float simple = 0.1, compound = 0.05, initial_sum = 100, simple_sum = 100, compound_sum = 100;

    for ( ; compound_sum <= simple_sum; ++years) {
        std::cout << "Year " << years << ": Simple sum is: " << simple_sum <<
                     "$, compound sum is: " << compound_sum << "$" << std::endl;
        simple_sum += initial_sum * simple;
        compound_sum += compound_sum * compound;
    }

    std::cout << "\nAfter " << years << " years compound sum " << compound_sum <<
                 "$ is greater than simple sum " << simple_sum << "$" << std::endl;
    return 0;
}