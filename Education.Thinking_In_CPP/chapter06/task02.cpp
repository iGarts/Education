#include <iostream>

class Simple {
    public: Simple(); ~Simple(); void print();
};

Simple::Simple() {}
Simple::~Simple() {}
void Simple::print() {std::cout << "Class init";}

int main() {
    Simple simple;
    simple.print();
    simple.~Simple();
}