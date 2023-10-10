#ifndef TASK04_H
#define TASK04_H

#include <iostream>

namespace  SALES
{
    const int QUARTERS = 4;
    struct Sales
    {
        double sales[QUARTERS];
        double averege;
        double min;
        double max;

    };
}

void set_sales(SALES::Sales &s, const double arr[], int n);
void set_sales(SALES::Sales &s);
void show_sales(const SALES::Sales &s);

#endif // TASK04_H
