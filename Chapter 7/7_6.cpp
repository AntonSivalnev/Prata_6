#include <iostream>

const int array_size = 10;

int fill_array(double *array, int array_size);
void show_array(const double *array, int array_size);
void reverse_array(double *array, int array_size);

int main()
{
    int array_size = ::array_size;
    double array[array_size];

    std::cout << "Enter " << array_size << " float numbers: ";
    array_size = fill_array(array, array_size);
    std::cout << "You`ve entered: ";
    show_array(array, array_size);
    std::cout << "Reversing array:";
    reverse_array(array, array_size);
    show_array(array, array_size);
    std::cout << "Reversing again:";
    reverse_array(&array[1], array_size - 2);
    show_array(array, array_size);
    return 0;
}

int fill_array(double *array, int array_size)
{
    int i;

    for (i = 0; i < array_size; ++i) {
        std::cin >> array[i];
        if (!std::cin)
            break;
    }

    return i;
}

void show_array(const double *array, int array_size)
{
    for (int i = 0; i < array_size; ++i) {
        std::cout << "\t" << array[i];
    }
    std::cout << std::endl;
}

void reverse_array(double *array, int array_size)
{
    double temp;

    for (int i = 0, j = array_size - 1; i < j; ++i, --j) {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}
