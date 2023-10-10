#include "task04.h"

void set_sales(SALES::Sales &s, const double arr[], int n){}

void set_sales(SALES::Sales &s)
{
    int min, temp = 0;
    int size = static_cast<int> (sizeof(s.sales)) / sizeof(s.sales[0]);
    double sum_sales = 0;
    for (int i = 0; i < size; i++)
    {
        sum_sales += s.sales[i];
    }
    s.averege = sum_sales / size;
    min = s.sales[0];
    for (int i = 1; i < size; i++)
    {
        if (s.sales[i] < min)
        {
            s.sales[i] = temp;
            s.sales[i] = min;
            min = temp;
        }
    }
    s.min = s.sales[0];
    s.max = s.sales[size - 1];
}

void show_sales(const SALES::Sales &s)
{
    using std::cout;
}
