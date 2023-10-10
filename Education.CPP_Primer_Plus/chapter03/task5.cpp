#include <iostream>

int main()
{
    long long population_earth, population_ukr;
    std::cout << "Enter а population of the earth: " << std::endl;
    std::cin  >> population_earth;
    std::cout << "Enter а population of the Ukraine: " << std::endl;
    std::cin  >> population_ukr;
    std::cout << "The population of the Ukraine is "
              << static_cast<float>(population_ukr) / population_earth * 100 << "%.";
}
