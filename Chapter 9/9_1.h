#include <cstring>
#include <iostream>

const int len = 40;
struct Golf
{
    char fullname[len];
    int handicap;
};

void setGolf(Golf & g, const char * name, int hc);
int setGolf(Golf & g);
void handicap(Golf & g, int hc);
void showGolf(const Golf & g);