#include <iostream>
#include <string>

struct info
{
    std::string first_name;
    std::string last_name;
    char grade;
    uint8_t age;
};

int main()
{
    info person1;
    std::cout << "What is your first name: ";
    std::cin  >> person1.first_name;
    std::cout << "What is your last name: ";
    std::cin  >> person1.last_name;
    std::cout << "What letter grade do you deserve (A, B, C): ";
    std::cin  >> person1.grade;
    std::cout << "What is your age?: ";
    std::cin  >> person1.age;
    std::cout <<  person1.last_name << ", " << person1.first_name << std::endl;
    std::cout << "Grade: " << person1.grade << std::endl;
    std::cout << "Age: " << person1.age << std::endl;
}
