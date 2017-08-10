#include <iostream>

const int strsize = 32;

struct bop {
    char fullname[strsize]; // real name
    char title[strsize];    // job title
    char bopname[strsize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main()
{
    char choice = 0;
    bop members[] = {{"Wimp Macho", "Seniour Frontend Developer", "WM", 0},
                     {"Raki Rhodes", "Junior Programmer", "SENIORPOMIDOR", 1},
                     {"Celia Laiter", "Junior Tester", "MIPS", 2},
                     {"Hoppy Hipman", "Analyst Trainee", "HHAT", 1},
                     {"Pat Hand", "Project Manager", "LOOPY", 2}};

    std::cout << "Benevolent Order of Programmers Report\na. display by name\tb. display by title\n"
                 "c. display by bopname\td. display by preference\nq. quit" << std::endl;

    while (choice != 'q') {
        std::cout << "Enter your choice: ";
        std::cin.get(choice).get();

        for (uint i = 0; i < sizeof(members) / sizeof(bop); ++i) {
            switch (choice) {
                case 'a': std::cout << members[i].fullname << std::endl;
                          break;
                case 'b': std::cout << members[i].title << std::endl;
                          break;
                case 'c': std::cout << members[i].bopname << std::endl;
                          break;
                case 'd': switch (members[i].preference) {
                            case 0: std::cout << members[i].fullname << std::endl;
                                                 break;
                            case 1: std::cout << members[i].title << std::endl;
                                                 break;
                            case 2: std::cout << members[i].bopname << std::endl;
                                                 break;
                            default: break;
                          }
                          break;
                default: break;
            }
        }
    }

    return 0;
}