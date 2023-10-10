#include <iostream>

using namespace std;

union data
{
    int i;
    float f;
};

int main()
{
    data type;
    int input;
    cout << "Enter a data type\n1 - integer\n2 - float\n";
    cin >> input;
    switch (input)
    {
    case 1:
        int a[10];
        for (int ci = 0; ci < 10; ci++)
            cout << "&a[" << ci << "] = " << &a[ci] << endl;
        break;
    case 2:
        float f[10];
        for (int ci = 0; ci < 10; ci++)
            cout << "&f[" << ci << "] = " << &f[ci] << endl;
        break;
    default:
        cout << "error" << endl;
        break;
    }
}