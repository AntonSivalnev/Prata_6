#include <iostream>
#include <cstring>

int main()
{
    int amount = 0;
    char word[50] = "\0";

    std::cout << "Enter words (to stop, type the word done):" << std::endl;
    std::cin >> word;

    for ( ; strcmp(word, "done"); ++amount) {
        std::cin >> word;
    }

    std::cout << "You entered a total of " << amount << " words.";

    return 0;
}