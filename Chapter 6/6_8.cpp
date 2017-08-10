#include <iostream>
#include <fstream>
#include <string>

int main()
{
    int chars;
    std::string source_path;
    std::ifstream fin;

    std::cout << "Enter a path to the source file:" << std::endl;
    std::getline(std::cin, source_path);

    fin.open(source_path);
    if (fin.is_open()) {
        fin.get();
        for (chars = 0; !fin.fail(); ++chars) {
            fin.get();
        }
        std::cout << "File: " << source_path << " has " << chars << " characters" << std::endl;
    } else {
        std::cout << "Unable to open file: " << source_path << std::endl;
        return 1;
    }

    return 0;
}