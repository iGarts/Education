#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> arr;
    for (int i = 0; i < 25; i++)
        arr.push_back(i * 10);
    for (int i = 0; i < 25; i++)
        cout << "[" << arr[i] << "]";
}