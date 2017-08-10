#include <iostream>
#include <string>

struct Member {
    std::string name;
    int donation;
};

const int limit = 10000;

int main()
{
    int group = 0, amount;
    Member *members;

    std::cout << "Please enter amount of members: ";
    (std::cin >> amount).get();

    members = new Member[amount];

    for (int i = 0; i < amount; ++i) {
        std::cout << "Enter name of the member #" << i + 1 << ": ";
        std::getline(std::cin, members[i].name);
        std::cout << "Enter donation: ";
        (std::cin >> members[i].donation).get();
    }

    std::cout << "\n\nGrand Patrons:" << std::endl;
    for (int i = 0; i < amount; ++i) {
        if (members[i].donation >= limit) {
            std::cout << "\t" << members[i].name
                      << ":\t" << members[i].donation << "$" << std::endl;
            ++group;
        }
    }
    if (!group)
        std::cout << "\tnone" << std::endl;

    std::cout << "\nPatrons:" << std::endl;
    if (group == amount)
        std::cout << "\tnone" << std::endl;
    else {
        for (int i = 0; i < amount; ++i) {
            if (members[i].donation < limit)
                std::cout << "\t" << members[i].name
                          << ":\t" << members[i].donation << "$" << std::endl;
        }
    }

    delete[] members;
    return 0;
}