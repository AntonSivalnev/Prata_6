#include <cctype>
#include <string>
#include <iostream>

std::string get_upper(const std::string &str);

int main()
{
    std::string str;

    while (true) {
        std::cout << "Enter a string (q to quit): ";
        getline(std::cin, str);
        if (str == "q")
            break;
        else
            std::cout << get_upper(str) << std::endl;
    }

    std::cout << "Bye." << std::endl;
    return 0;
}

std::string get_upper(const std::string &str)
{
    std::string upper = str;

    for (unsigned int i = 0; i < str.size(); ++i)
        upper[i] = toupper(str[i]);

    return upper;
}