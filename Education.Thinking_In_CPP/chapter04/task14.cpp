#include <iostream>
#include <string>
#include <vector>

struct Video
{
    bool in;
    char *prev, *next;
    std::string movie;
    std::string director;
    std::string genre;
    size_t date;
    static void status(Video &lnk) {
        if (lnk.in) std::cout << "In stock" << std::endl; 
        else std::cout << "Unaviable" << std::endl;}
};

void print(Video &lnk) {
        std::cout << lnk.movie << lnk.director << lnk.date << std::endl;};

int main() {
    Video Stack;
    Stack.movie = "Krepky Oreshek";
    Stack.director = "Some Director";
    Stack.date = 1900;
    Stack.in = 1;
    print(Stack);
    Video::status(Stack);
}
