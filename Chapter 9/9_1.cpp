#include "9_1.h"

int main()
{
    int handicap = 24;
    const char name[] = "Ann Birdfree";
    Golf player;

    setGolf(player, name, handicap);
    showGolf(player);
    ::handicap(player, 42);
    showGolf(player);
    if (!setGolf(player))
        std::cout << "You haven`t entered player`s name!" << std::endl;
    showGolf(player);

    return 0;
}

void setGolf(Golf & g, const char * name, int hc)
{
    strncpy(g.fullname, name, len);
    g.handicap = hc;
}

int setGolf(Golf & g)
{
    std::cout << "Enter full name (" << len << " characters max): ";
    (std::cin).getline(g.fullname, len);
    std::cout << "Enter handicap: ";
    std::cin >> g.handicap;
    return (g.fullname[0] != '\0');
}

void handicap(Golf & g, int hc)
{
    g.handicap = hc;
}

void showGolf(const Golf & g)
{
    std::cout << "Displaying golf structure:\n\tFullname:\t" << g.fullname <<
                 "\n\tHandicap:\t" << g.handicap << std::endl;
}