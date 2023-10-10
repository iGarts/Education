#include <iostream>
#define OUT_L "It's less then 5"
#define OUT_G "It's greater then 5"

using namespace std;

int main() {
    int i = 0;
    cout << "enter a number" << endl;
    cin >> i;
    cout << ((i < 5) ? OUT_L:OUT_G) << endl;
}