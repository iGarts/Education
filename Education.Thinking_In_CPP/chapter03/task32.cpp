#include <iostream>

using namespace std;

int dtoi(double d) {
    return ((int)d);
}
int (*dtoi_ptr)(double);

int main() {
    double num = 3.14159;
    int (*dtoi_ptr)(double) = dtoi;
    cout <<  num << endl;
    cout <<  dtoi(num) << endl;
    cout <<  dtoi_ptr(num) << endl;
}