#include <iostream>
#include <cstring>

const int BUFFER_SIZE = 50l;

int main()
{
    char first_name[BUFFER_SIZE], last_name[BUFFER_SIZE], concat[BUFFER_SIZE*2];

    std::cout << "Enter your first name: ";
    std::cin.getline(first_name, BUFFER_SIZE);
    first_name[BUFFER_SIZE - 1] = '\0';
    std::cout << "Enter your last name: ";
    std::cin.getline(last_name, BUFFER_SIZE);
    last_name[BUFFER_SIZE - 1] = '\0';

    strncpy(concat, last_name, BUFFER_SIZE);
    strcat(concat, ", ");
    strncat(concat, first_name, BUFFER_SIZE - strlen(", "));

    std::cout << "Here’s the information in a single string: " << concat << std::endl;

    return 0;
}