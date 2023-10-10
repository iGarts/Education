#include <iostream>

class A {
    public:
        int i;
        void print_i();
    private:
        float f;
        void print_f();
    protected:        
        char c;
        void print_c();
};

void A::print_i() {
    int i = 1;
    std::cout << i << std::endl;
}

void A::print_f() {
    float f = 1.1;
    std::cout << f << std::endl;
}

void A::print_c() {
    char c = 'C';
    std::cout << c << std::endl;
}

int main() {
    A a;
    a.print_i();
    //a.print_f();
    //a.print_c();
}