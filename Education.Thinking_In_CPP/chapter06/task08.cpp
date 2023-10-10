#include <iostream>
#include <string>

int main() {
    std::string stack[] = {"one","two","three"};
    for (int i = 0; i < sizeof(stack)/sizeof(*stack); i++)
        std::cout << stack[i] << std::endl;
}