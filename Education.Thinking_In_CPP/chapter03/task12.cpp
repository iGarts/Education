#include <iostream>

using namespace std;

int main(){
    double a, b;
    cout << "Enter a first double";
    cin >> a;
    cout << "Enter a second double";
    cin >> b;
    cout << "a > b is: " << (a > b) << endl;
    cout << "a < b is: " << (a < b) << endl;
    cout << "a >= b is: " << (a >= b) << endl;
    cout << "a <= b is: " << (a <= b) << endl;
    cout << "a == b is: " << (a == b) << endl;
    cout << "a not_eq b is: " << (a not_eq b) << endl;
    cout << "a and b is: " << (a and b) << endl;
    cout << "a or b is: " << (a or b) << endl;
    cout << "(a <10) && (b<10) is: " << ((a < 10) && (b < 10)) << endl;
}