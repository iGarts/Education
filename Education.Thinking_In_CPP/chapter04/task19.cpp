#include <iostream>

struct A{
    int i;
    char c;
    struct {
        int iA;
        char cA;
    };
};

int main() {
    A a;
    a.i = 1;
    a.c = 'A';
    a.iA = 2;
    a.cA = 'B';
    std::cout << a.i << " " << a.c << " " << a.iA << " " << a.cA << std::endl;
}