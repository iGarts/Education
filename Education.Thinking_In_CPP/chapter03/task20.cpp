#include <iostream>

using namespace std;

union data
{
    struct c_type {char c;}character[10];
    struct i_type {int i[10];}integer;
};

int main()
{
    data dt;
    int input;
    cout << "Enter a data type\n1 - integer\n2 - float\n";
    cout << "sizeof(dt) = " << sizeof(dt.integer) << endl;
    cin >> input;
    switch (input)
    {
    case 1: 
        
        for (int ci = 0; ci < 10; ci++)
            cout << "dt.integer[" << ci << "] = " << &dt.integer.i[ci] << endl;
            cout << "sizeof(integer struct) = " << sizeof(dt.integer) << endl;
        break;
    case 2:
        float f[10];
        for (int ci = 0; ci < 10; ci++)
            cout << "dt.character[" << ci << "] = " << &dt.character[ci] << endl;
            cout << "sizeof(floating struct) = " << sizeof(dt.character) << endl;
        break;
    default:
        cout << "error" << endl;
        break;
    }
}