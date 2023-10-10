#include <iostream>

class Simple {
    private: int i;
    public: Simple(int ii); ~Simple(); void print();
};

Simple::Simple(int ii) {i = ii;}
Simple::~Simple() {}
void Simple::print() {std::cout << "Class init: " << i;}

int main() {
    Simple simple(1);
    simple.print();
    simple.~Simple();
}