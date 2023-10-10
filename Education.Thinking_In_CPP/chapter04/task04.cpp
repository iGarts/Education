#include <iostream>

struct Str { int i; };

void func(Str* ptr) { ptr->i += 10; }

void print(Str* ptr) {
    std::cout << ptr->i << std::endl;
}

int main(int argc, char **argv) {
    struct Str str = {str.i = atoi(argv[1])};
    func(&str);
    print(&str);
}

