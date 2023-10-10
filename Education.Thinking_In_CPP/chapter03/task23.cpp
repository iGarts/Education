#include <iostream>

using namespace std;

typedef struct Str{
    union Dt
    {
        char c;
        int i;
        float f;
    };
}str;


int main() {
    Str str;
    Str * ptr_str = &str;
    cout << "sizeof(str) =  " << sizeof(str) << endl;
    cout << "sizeof(ptr_str) =  " << sizeof(ptr_str) << endl;
    ptr_str++;
    cout << "sizeof(ptr_str) =  " << sizeof(ptr_str) << endl;
    Str arr[10];
    Str * ptr_arr = arr;
    cout << "sizeof(arr) =  " << sizeof(arr) << endl;
    cout << "sizeof(ptr_arr) =  " << sizeof(ptr_arr) << endl;
}