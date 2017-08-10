#include <iostream>
#include <fstream>
#include <string>

struct Member {
    std::string name;
    int donation;
};

const int limit = 10000;

int main(int argc, char const *argv[])
{
    int group = 0, amount;
    std::ifstream fin;
    std::string data_path, temp;
    Member *members;

    if (argc == 2)
        data_path = argv[1];
    else {
        std::cout << "Path to the data file required as second parameter!" << std::endl;
        return 1;
    }

    fin.open(data_path);
    if (fin.is_open()) {
        (fin >> amount);
        fin.get();
        fin.get();

        members = new Member[amount];

        for (int i = 0; i < amount && fin.good(); ++i) {
            std::getline(fin, temp);
            members[i].name = temp.substr(0, temp.size() - 1);
            (fin >> members[i].donation);
            fin.get();
            fin.get();
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
    } else {
        std::cout << "Unable to open file: " << data_path << std::endl;
        return 1;
    }

    fin.close();
    delete[] members;
    return 0;
}