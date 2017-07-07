#include <iostream>

const int BUFFER_SIZE = 50;

int main()
{
    int age;
    char first_name[BUFFER_SIZE], last_name[BUFFER_SIZE], grade;

    std::cout << "What is your first name? ";
    std::cin.getline(first_name, BUFFER_SIZE);
    std::cout << "What is your last name? ";
    std::cin.getline(last_name, BUFFER_SIZE);
    std::cout << "What letter grade do you deserve? ";
    std::cin.get(grade).get();
    std::cout << "What is your age? ";
    (std::cin >> age).get();

    std::cout << "Name: " << last_name << ", " << first_name << std::endl;
    std::cout << "Grade: " << (char)(grade + 1) << std::endl;
    std::cout << "Age: " << age << std::endl;

    return 0;
}