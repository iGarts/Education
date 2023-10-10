#include <iostream>
#define SIZE 25
struct Stash {double d[SIZE];};

int main() {
    struct Stash stash,stack;
    for(int i = 0; i < SIZE; i++) {
        stash.d[i] = 0;
        stack.d[i] = 1;
        std::cout << "[" << stash.d[i] << "]";
    }
    std::cout << std::endl;
    for(int i = 0; i< SIZE; i++)
        std::cout << "[" << stack.d[i] << "]";
}
