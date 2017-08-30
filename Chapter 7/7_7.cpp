#include <iostream>

const int max = 5;

double * fill_array(double *n1, double *n2);
void show_array(const double *n1, const double *n2);
void revalue(double r, double *n1, double *n2);

int main()
{
    double *properties_start = new double[max], *properties_end;
    properties_end = fill_array(properties_start, properties_start + max);

    show_array(properties_start, properties_end);
    if (properties_end - properties_start > 0) {
        std::cout << "Enter revaluation factor: ";
        double factor;
        while (!(std::cin >> factor)) {
            std::cin.clear();
            while (std::cin.get() != '\n')
            continue;
            std::cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties_start, properties_end);
        show_array(properties_start, properties_end);
    }
    std::cout << "Done.\n";

    delete[] properties_start;

    return 0;
}

double * fill_array(double *n1, double *n2)
{
    double temp;
    double *i;
    for (i = n1; i < n2; ++i) {
        std::cout << "Enter value #" << (i - n1 + 1) << ": ";
        std::cin >> temp;
        if (!std::cin) {
            std::cin.clear();
            while (std::cin.get() != '\n')
            continue;
            std::cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *i = temp;
    }
    return i;
}

void show_array(const double *n1, const double *n2)
{
    for (const double *i = n1; i < n2; ++i) {
        std::cout << "Property #" << (i - n1 + 1) << ": $";
        std::cout << *i << std::endl;
    }
}

void revalue(double r, double *n1, double *n2)
{
    for (double *i = n1; i < n2; ++i)
        *i *= r;
}
