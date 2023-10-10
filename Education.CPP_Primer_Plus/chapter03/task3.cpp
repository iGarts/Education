#include <iostream>

int main()
{
    const int DIG = 60, SEC = 3600;
    double degrees, minutes, seconds;
    std::cout << "Enter а latitude in degrees, minutes , and seconds: " << std::endl;
    std::cout << "First, enter the degrees: ";
    std::cin  >> degrees;
    std::cout << "First, enter the minutes: ";
    std::cin  >> minutes;
    std::cout << "First, enter the seconds: ";
    std::cin  >> seconds;
    double result = degrees + (minutes / DIG) + (seconds / SEC);
    std::cout << degrees << " degrees, "
              << minutes << " minutes, "
              << seconds << " seconds = "
              << static_cast<double>(result)  << " degrees. ";
}
