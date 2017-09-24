#include <iostream>
#include <string>

void print(std::string &str, int mod=0);

int main()
{
    std::string str = "Hello world!!!";

    for (int i = 0; i < 12; ++i) {
        if (i % 3)
            print(str, (i % 3) - 1);
        else
            print(str);
    }

    return 0;
}

void print(std::string &str, int mod)
{
    static int calls = 0;

    ++calls;

    std::cout << str << std::endl;

    if (mod) {
        for (int i = 1; i < calls; ++i)
            std::cout << str << std::endl;
    }
    std::cout << std::endl;
}
