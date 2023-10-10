#include <iostream>
#include <string>

struct Video
{
    bool in;
    char *prev, *next;
    std::string movie;
    std::string director;
    std::string genre;
    size_t date;
    void print() {
        std::cout << movie << director << date << std::endl;};
    void status() {
        if (in) std::cout << "In stock" << std::endl; 
        else std::cout << "Unaviable" << std::endl;}
};
