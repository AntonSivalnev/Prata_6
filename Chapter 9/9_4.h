namespace SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    };

    void set_sales(Sales & s, const double ar[], int n);
    void set_sales(Sales & s);
    void show_sales(const Sales & s);
}
