#include <iostream>

typedef double(*pf)(double, double);

double div(double, double);
double sum(double, double);
double calculate(double, double, pf);

int main()
{
    pf p_arr[2] = {div,sum};
//  p_arr[0] = div;
//  p_arr[1] = sum;
    double result_d = calculate(2.0,3.0,p_arr[0]);
    double result_s = calculate(2.0,3.0,p_arr[1]);
    std::cout << result_d << std::endl;
    std::cout << result_s << std::endl;
}

double div(double x, double y)
{
    return x*y;
}

double sum(double x, double y)
{
    return x+y;
}

double calculate(double x, double y, pf p_func)
{
    return (x + y) - p_func(x,y);
}
