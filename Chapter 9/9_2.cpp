#include <string>
#include <iostream>

const int ArSize = 10;

void strcount(const std::string str);

int main()
{
    std::string input;

    std::cout << "Enter a line: " << std::endl;
    getline(std::cin, input);
    while (input != "")
    {
        strcount(input);
        std::cout << "Enter next line (empty line to quit):\n";
        getline(std::cin, input);
    }
    std::cout << "Bye" << std::endl;

    return 0;
}

void strcount(const std::string str)
{
    static int total = 0;
    int count = str.length();
    total += count;

    std::cout << "\"" << str <<"\" contains " << count << " characters\n" <<
                 total << " characters total" << std::endl;
}