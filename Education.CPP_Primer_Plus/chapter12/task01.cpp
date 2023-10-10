#include "task01.h"
#include <iostream>
#include <cctype>
#include <cstring>
Cow::Cow()
{
    std::strcpy(name, "empty");
    hobby = new char[6];
    std::strcpy(hobby, "empty");
    weight = 0;
    std::cout << "Default Constructor" << std::endl;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    std::strncpy(name, nm, 19);
    int hobby_size = std::strlen(ho);
    hobby = new char[hobby_size + 1];
    strcpy(hobby, ho);
    weight = wt;
    std::cout << "Base Constructor" << std::endl;
}

Cow::Cow(const Cow &c)
{
    std::strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    std::cout << "Copy Constructor" << std::endl;
}

Cow::~Cow()
{
    delete[] hobby;
    std::cout << "Destructor" << std::endl;
}

Cow & Cow::operator=(const Cow &c)
{
    if (this == &c)
        return *this;
    delete[] hobby;
    std::strcpy(name, c.name);
    hobby = new char[strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    std::cout << "Operator Overloading" << std::endl;
    return *this;
}

void Cow::show_cow() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hobby: " << hobby << std::endl;
    std::cout << "Weight: " << weight << std::endl;
}

int main()
{
    Cow c1;
    c1.show_cow();
    Cow c2("Cow2", "football", 120);
    c2.show_cow();
    Cow c3 = c2;
    c3.show_cow();
}
