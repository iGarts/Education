#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int input = 0;
    string word;
    vector<string> words;
    ifstream in("text.txt");
    while (true)
    {
        in >> word;
        cout << "1. Output word\n2.Exit" << endl;
        cin >> input;
        switch (input)
        {
        case 1:
            cout << word << endl;
            break;
        case 2:
            cout << "See you later" << endl;
            return 0;
        default:
            cout << "error";
            break;
        }
    }
}