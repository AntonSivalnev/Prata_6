#include <iostream>
#include <string>
#include <cctype>

const char vowels[] = "AaEeIiOoUuYy";

int main()
{
    int vowels = 0, consonants = 0, other = 0, temp;
    std::string word;

    std::cout << "Enter words (q to quit):" << std::endl;

    for (std::cin >> word; word != "q"; std::cin >> word) {
        if (isalpha(word[0])) {
            temp = vowels;
            for (unsigned int i = 0; i < sizeof(::vowels) - 1; ++i) {
                if (word[0] == ::vowels[i]) {
                    ++vowels;
                    break;
                }
            }
            consonants += (temp == vowels);
        } else
            ++other;
    }

    std::cout << vowels << " words beginning with vowels\n"
              << consonants << " words beginning with consonants\n"
              << other << " others" << std::endl;

    return 0;
}