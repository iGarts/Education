#include <iostream>
#include <string>

using namespace std;

void get_ptr(string *ptr);
void get_ref(string &ref);

int main()
{
    string str = "slovo";
    string *ptr_str = &str;
    cout << str << endl;
    get_ptr(ptr_str);
    cout << str << endl;
    get_ref(str);
    cout << str << endl;
}

void get_ptr(string *ptr){
    *(ptr) = "glovo";
}

void get_ref(string &ref){
    ref[0] = 'olovo';
}
