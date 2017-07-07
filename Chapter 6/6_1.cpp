#include <iostream>
#include <cctype>

int STR_LEN_LIMIT = 250;

int main()
{
    int i = 0;
    char string[STR_LEN_LIMIT], ch;

    std::cout << "Enter a string, terminated with @ symbol" << std::endl;

    for (std::cin.get(ch); ch != '@' && i < (STR_LEN_LIMIT - 1); std::cin.get(ch)) {
        if (!isdigit(ch)) {
            string[i++] = isupper(ch) ? tolower(ch) : toupper(ch);
        }
    }
    string[i] = '\0';
    std::cout << "Your string is: \n" << string << std::endl;

    return 0;
}