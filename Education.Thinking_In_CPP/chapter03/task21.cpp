#include <iostream>
#include <string>

using namespace std;

int main() {
    string words[20];
    for (int i = 0; i<20; i++)
        cin >> words[i];
    for (int i = 0; i<20;i++)
        cout << words[i] << " ";
}