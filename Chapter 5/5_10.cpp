#include <iostream>

int main()
{
    uint rows;
    char *line;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    line = new char[rows + 1];
    line[rows] = '\0';

    for (uint i = 1, j; i <= rows; ++i) {
        for (j = 0; j < (rows - i); ++j) {
            line[j] = '.';
        }
        for (; j < rows; ++j) {
            line[j] = '*';
        }

        std::cout << line << std::endl;
    }
    return 0;
}