#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> v;
    for (int i = 0; i < 10; i++)
        v.push_back(i);
    for (int i = v.size(); i > 0; i--)
        cout << v[i] << "|" << endl;
    for (int i = 0; i < 10; i++)
        v[i] *= 10;
    for (int i = v.size(); i >= 0; i--)
        cout << v[i] << "|";
}