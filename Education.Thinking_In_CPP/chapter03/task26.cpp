#include <iostream>
#define PRINT(A) cout << A << endl;

using namespace std;


void int_to_void(void* ptr, size_t t,int n) {
    char* ptr_ch = (char*)ptr;
    for(int i = 0; i < n*t; i++) {
       *(ptr_ch+i) = n;}
}

int main() {
    int arr[5] = {0,1,2,3,4};
    for(int i=0;i<5;i++)
        PRINT(arr[i]);
    int_to_void(arr,sizeof(int),1);
    for(int i=0;i<5;i++)
        PRINT(arr[i]);
}