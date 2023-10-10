#include <iostream>
#include <string>

class A {
public:
    B * ptr_b;
    void print(B * ptr);
    std::string a_ = "string a";
};

class B {
public:
    A * a_ptr;
    void print(A *ptr);
    std::string b_ = "string b";
};

void A::print(B *ptr) {std::cout << ptr->b_;}
void B::print(A *ptr) {std::cout << ptr->a_;}

int main() {
    A a;
    B b;
    a.print(&b);
    b.print(&a);
}