#include <iostream>
#define SIZE 25
struct Stash {double d[SIZE];};

int main() {
    struct Stash stash;
    for(int i = 0; i < SIZE; i++) {
        stash.d[i] = 0;
        std::cout << "[" << stash.d[i] << "]";
    }
}
