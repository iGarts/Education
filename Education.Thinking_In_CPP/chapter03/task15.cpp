#include <iostream>
#include <string>
#include <cctype>

void str_upper(struct str* ptr);

using namespace std;

typedef struct str {
    string first;
    string second;
    string third;
}str;

int main() {
    str oop;
    str *ptr_oop = &oop;
    oop.first = "incapsulation";
    oop.second = "legacy";
    oop.third = "polymorphysm";
    cout << ptr_oop->third << endl;
    cout << oop.third << endl;
    str_upper(ptr_oop);
}

void str_upper(struct str * ptr) {
    ptr->third[0] = 'P';
    cout << ptr->third << endl;
}

