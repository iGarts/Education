#include <iostream>

int main() {
    float arr1[5] = {1.1,2.2,3.3,4.4,5.5};
    float arr2[5] = {1.1,2.2,3.3,4.4};
    float arr3[5] = {1.1,2.2,3.3,4.4,5.5};
    float arr4[] = {1.1,2.2,3.3,4.4,5.5};
    for (int i = 0; i < sizeof(arr1) / sizeof(*arr1); i++)
        std::cout << "[" << arr1[i] << "]";
    std::cout << std::endl;
    for (int i = 0; i < sizeof(arr2) / sizeof(*arr2); i++)
        std::cout << "[" << arr2[i] << "]";
    std::cout << std::endl;
    for (int i = 0; i < sizeof(arr3) / sizeof(*arr3); i++)
        std::cout << "[" << arr3[i] << "]";
    std::cout << std::endl;
    for (int i = 0; i < sizeof(arr4) / sizeof(*arr4); i++)
        std::cout << "[" << arr4[i] << "]";
    std::cout << std::endl;
}