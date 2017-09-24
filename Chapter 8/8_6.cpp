#include <cstring>
#include <iostream>

template <typename T>
T maxn(const T *arr, int n);

const char * maxstr(const char * const *arr, int n);


int main()
{
    int arri[] = {1, 8, 2, 6, 7, 4};
    double arrd[] = {2.78, 3.14, 5.25, 1.99};
    const char *arrs[] = {"Test string", "Another string", "This is the longest string", "New string",
                    "The last string"};

    std::cout << "The largest integer: " << maxn(arri, sizeof(arri) / sizeof(int)) << std::endl;
    std::cout << "The largest double: " << maxn(arrd, sizeof(arrd) / sizeof(double)) << std::endl;
    std::cout << "The longest string: " << maxstr(arrs, sizeof(arrs) / sizeof(const char *)) <<
                 std::endl;

    return 0;
}

template <typename T>
T maxn(const T *arr, int n)
{
    T temp = arr[0];

    for (int i = 1; i < n; ++i) {
        temp = arr[i] > temp ? arr[i] : temp;
    }

    return temp;
}

const char * maxstr(const char * const *arr, int n)
{
    const char *tempstr = arr[0];
    unsigned int templen = strlen(tempstr);

    for (int i = 1; i < n; ++i) {
        if (strlen(arr[i]) > templen) {
            tempstr = arr[i];
            templen = strlen(tempstr);
        }
    }

    return tempstr;
}