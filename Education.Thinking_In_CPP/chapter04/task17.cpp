#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int main() {
    int *iptr = new int(100);
    for (int i = 0; i<100;i++) {
        iptr[i] = 1;
        cout << iptr[i];}
    cout << endl;
    delete (iptr);
}