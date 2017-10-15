#include <cstring>
#include <iostream>

struct Chaff
{
    char dross[20];
    int slag;
};

int main()
{
    char *buffer = new char[100];
    const char *str[] = {"Chaff 1", "Chaff 2"};

    Chaff *chaffs = new (buffer) Chaff[2];

    for (int i = 0; i < 2; ++i) {
        strcpy(chaffs[i].dross, str[i]);
        chaffs[i].slag = i + 1;
    }

    for (int i = 0; i < 2; ++i) {
        std::cout << chaffs[i].slag << ": " << chaffs[i].dross << std::endl;
    }

    delete[] buffer;
    return 0;
}
