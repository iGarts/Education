#include <iostream>

int main()
{
    const double K = 0.083333166667;
    double height_in_inch;
    std::cout << "Enter you height in inches" << std::endl;
    std::cin  >> height_in_inch;
    std::cout << "Your height in feet: "
              << height_in_inch * K
              << std::endl;
}
