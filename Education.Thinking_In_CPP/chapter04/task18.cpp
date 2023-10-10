#include <iostream>
#include <string.h>
#define DEBUG(X) std::cout << "DEBUG" << X << std::endl;

char* new_mem(char *arr, size_t n) {
    char *new_arr = new char(n+1);
    strncpy(new_arr,arr,n+1);
    new_arr[n+1] = '\0';
    return new_arr;
}

int main() {
    char arr[20] = "shvabra kadabra";
    DEBUG(arr);
    DEBUG(strlen(arr));
    char *new_arr = new_mem(arr,strlen(arr));
    DEBUG(&arr);
    DEBUG(&new_arr);
    DEBUG(sizeof(arr));
    DEBUG(sizeof(new_arr));
    delete []new_arr;
}