#include <iostream>

using std::cout;
using std::endl;

template<typename T> T sum(T x, T y) {return x + y;}

int main()
{
    auto x = sum(1,2);
    double y = sum(10.0,20.0);
    cout << x << endl;
    cout << double(y) << endl;
}

