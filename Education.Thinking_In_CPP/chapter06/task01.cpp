#include <iostream>

class Simple {
    public: Simple(); void print();
};

Simple::Simple() {}
void Simple::print() {std::cout << "Class init";}

int main() {
    Simple simple;
    simple.print();
}