#include <iostream>

using std::cout;
using std::endl;

template<typename T>
T maxn(T *arr, int size)
{
    T temp = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > temp) {temp = arr[i];}
    }
    return temp;
}

int main()
{
    int arr_i[] = {1,2,3,4,5};
    cout << maxn(arr_i, 5) << endl;
    double arr_d[] = {1.0,2.0,3.0};
    cout << maxn(arr_d, 3) << endl;
}
