#include <cstring>
#include <iostream>

struct Stringy {
    char * str;
    int ct;
};

void set(Stringy &stringy, const char* cstr);
void show(const Stringy &stringy, int times=1);
void show(const char *cstr, int times=1);

int main()
{
    Stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    return 0;
}


void set(Stringy &stringy, const char* cstr)
{
    stringy.ct = strlen(cstr);
    stringy.str = new char[stringy.ct + 1];
    strcpy(stringy.str, cstr);
}


void show(const Stringy &stringy, int times)
{
    for (int i = 0; i < times; ++i) {
        std::cout << stringy.str << std::endl;
    }
}

void show(const char *cstr, int times)
{
    for (int i = 0; i < times; ++i) {
        std::cout << cstr << std::endl;
    }
}