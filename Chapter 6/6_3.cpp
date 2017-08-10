#include <iostream>
#include <string>

int main()
{
    char choice = 0;
    std::string string;
    std::cout << "Please enter one of the following choices:\n"
                 "\tc) carnivore\t\tp) pianist\n\tt) tree\t\t\tg) game" << std::endl;

    while (!choice) {
        std::cin.get(choice).get();

        switch (choice) {
            case 'c': string = "carnivore";
                      break;
            case 'p': string = "pianist";
                      break;
            case 't': string = "tree";
                      break;
            case 'g': string = "game";
                      break;
            default: choice = 0;
        }

        if (!choice) {
            std::cout << "Please enter a c, p, t, or g: ";
        }
    }

    std::cout << "A maple is a " << string << "." << std::endl;
    return 0;
}