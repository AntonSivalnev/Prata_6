#include <iostream>
#include <string>

double calculate(double n1, double n2, double (*pfunc)(double, double));
double add(double n1, double n2);
double substract(double n1, double n2);
double multiply(double n1, double n2);
double square(double n);

double (*pfunc[3])(double, double) {add, substract, multiply};
std::string names[3] {"Addition", "Substraction", "Multiplication"};

int main()
{
    double n1, n2;
    while (true) {
        std::cout << "\nEnter pair of numbers: " << std::endl;
        std::cout << "- ";
        std::cin >> n1;
        if (!std::cin)
            break;
        std::cout << "- ";
        std::cin >> n2;
        if (!std::cin)
            break;
        for (int i = 0; i < 3; ++i) {
             std::cout << names[i] << ":\t" << calculate(n1, n2, pfunc[i]) << std::endl;
        }
    }

    return 0;
}

double calculate(double n1, double n2, double (*pfunc)(double, double))
{
    return pfunc(n1, n2);
}

double add(double n1, double n2)
{
    return square(n1) + square(n2);
}

double substract(double n1, double n2)
{
    return square(n1) - square(n2);
}

double multiply(double n1, double n2)
{
    return square(n1) * square(n2);
}

double square(double n)
{
    return n * n;
}