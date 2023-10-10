#include <iostream>

struct A { 
    void func() {
        std::cout << "Whats up" << std::endl; 
    };
    }; 

int main() {
    struct A a;
    a.func();
}