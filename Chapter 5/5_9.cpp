#include <iostream>
#include <string>

int main()
{
    int amount = 0;
    std::string word = "";

    std::cout << "Enter words (to stop, type the word done):" << std::endl;
    std::cin >> word;

    for ( ; word != "done"; ++amount) {
        std::cin >> word;
    }

    std::cout << "You entered a total of " << amount << " words.";

    return 0;
}