#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<float> arr_1, arr_2, arr_3;
    for (int i = 0; i < 25; i++)
    {
        arr_1.push_back(i * 5);
        arr_2.push_back(i * 5);
        arr_3.push_back(arr_1[i] + arr_2[i]);
    }
    for (int i = 0; i < 25; i++)
        cout << "[" << arr_3[i] << "]";
}