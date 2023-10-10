#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> arr;
    for (int i = 0; i < 25; i++)
        arr.push_back(i);
    for (int i = 0; i < 25; i++)
    {
        arr[i] *= arr[i];
    }
    for (int i = 0; i < 25; i++)
        cout << "[" << arr[i] << "]";
}