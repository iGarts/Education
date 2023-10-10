#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    std::cout << "string\n"
              << "8\n"
              << "gnirts\n"
              << std::endl;
    cout << "a number is decimal: " << dec << 15 << endl;
    cout << "In octal: " << oct << 15 << endl;
    cout << "In HEX: " << hex << 15 << endl;
    cout << "a floating: " << 3.14159 << endl;
    cout << "non printing char (escape): " << char(27) << endl;
    /**************************************************************/
    string str1, str2;
    string str3 = "wtf";
    string str4("bro");
    cout << str3 << sizeof(str1) << endl;
    cout << str4 << sizeof(str1) << endl;
    str1 = str3 + "?";
    str2 = str1 + str3;
    cout << str1 << sizeof(str1) << endl;
    cout << str2 << sizeof(str1) << endl;
    system("--------------------------");
    /**************************************************************/
    ifstream in("f1.txt");
    ofstream out("f2.txt");
    string str;
    while (getline(in, str))
        out << str << "\n";
}