#include <array>
#include <iostream>

template <typename T>
T max5(const std::array<T, 5> &arr);

int main()
{
    std::array<int, 5> arri = {1, 5, 2, 6, 3};
    std::array<double, 5> arrd = {4.0, 23.87, 23.88, 19.25, 23.86};

    std::cout << "Max: " << max5(arri) << std::endl;
    std::cout << "Max: " << max5(arrd) << std::endl;

    return 0;
}

template <typename T>
T max5(const std::array<T, 5> &arr)
{
    T temp = arr[0];

    for (int i = 1; i < 5; ++i) {
        temp = arr[i] > temp ? arr[i] : temp;
    }

    return temp;
}