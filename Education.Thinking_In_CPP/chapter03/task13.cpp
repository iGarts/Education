#include "task13.h"

int main() {
    unsigned int getval;
    unsigned char a, b;
    cout << "enter a number between 0 and 255: ";
    cin >> getval;
    a = getval;
    PR("A in binary: ", a);
    cout << "enter a number between 0 and 255: ";
    cin >> getval;
    b = getval;
    PR("B in binary: ", b);
    PR(" a | b: ", a | b);
    PR(" a & b: ", a & b);
    PR(" a ^ b: ", a ^ b);
    PR("  ~a:   ", ~a);
    PR("  ~b:   ", ~b);
}