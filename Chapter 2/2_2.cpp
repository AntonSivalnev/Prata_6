#include <iostream>

int convert(int furlongs);

int main()
{
    int furlongs;

    std::cout << "Please enter a distance in furlongs: ";
    std::cin >> furlongs;
    std::cout << "The distance in yards is: " << convert(furlongs) << " yards" << std::endl;
    return 0;
}

int convert(int furlongs)
{
    return furlongs * 220;
}