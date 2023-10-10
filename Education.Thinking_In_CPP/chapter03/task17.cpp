#include <iostream>

using namespace std;

union Packed
{
    char c;
    int i;
    float f;
    double d;
    long long int lli;
};

int main() {
    cout << sizeof(Packed) << endl;
    Packed x;
    x.i = 'c';
    cout << x.i << endl;
    x.f = 3.14159;
    cout << x.f << endl;
}
