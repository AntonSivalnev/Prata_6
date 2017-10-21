#include "9_4.h"

int main()
{
    double vals[] = {100.5, 9000, 7543.21};
    SALES::Sales s1, s2;
    SALES::set_sales(s1, vals, 3);
    SALES::set_sales(s2);

    SALES::show_sales(s1);
    SALES::show_sales(s2);
}