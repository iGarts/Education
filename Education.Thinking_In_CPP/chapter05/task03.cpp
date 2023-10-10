#include <iostream>
#include <string>

class A {
    public: void print();
    private: std::string s;
    friend void PRINT();
};

void A::print() {std::cout << "one" << std::endl;}
void PRINT() {std::cout << "ONE" << std::endl;}

int main() {
    A a;
    a.print();
    PRINT();
}