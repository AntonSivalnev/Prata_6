#include <iostream>

#include "9_4.h"

namespace SALES
{
    void set_sales(Sales & s, const double ar[], int n)
    {
        double sum = 0;

        for (int i = 0; i < QUARTERS; ++i) {
            s.sales[i] = i < n ? ar[i] : 0;
            sum += s.sales[i];
            if (i == 0) {
                s.max = s.sales[0];
                s.min = s.sales[0];
            } else if (i < n) {
                s.max = s.sales[i] > s.max ? s.sales[i] : s.max;
                s.min = s.sales[i] < s.min ? s.sales[i] : s.min;
            }
        }
        s.average = sum / n;
    }

    void set_sales(Sales & s)
    {
        double sum = 0;

        std::cout << "Enter " << QUARTERS << " sales values:" << std::endl;
        for (int i = 0; i < QUARTERS; ++i) {
            while (!(std::cin >> s.sales[i])) {
                std::cin.clear();
                while (std::cin.get() == '\n')
                    continue;
                std::cout << "Please enter a number!" << std::endl;
            }
            sum += s.sales[i];
            if (i == 0) {
                s.max = s.sales[0];
                s.min = s.sales[0];
            } else {
                s.max = s.sales[i] > s.max ? s.sales[i] : s.max;
                s.min = s.sales[i] < s.min ? s.sales[i] : s.min;
            }
        }
        s.average = sum / QUARTERS;
    }

    void show_sales(const Sales & s)
    {
        std::cout << "\n\nSales statistics\n" << std::endl;
        for (int i = 0; i < QUARTERS; ++i) {
            std::cout << i + 1 << " quarter: " << s.sales[i] << std::endl;
        }
        std::cout << "\nMaximum sales: " << s.max << "\nMinimum sales: " << s.min
                  << "\nAverage: " << s.average << std::endl;
    }
}