#include <iostream>
using namespace std;

int findMin(int arr[], int size){
    int min = arr[0];
    for(int i = 0;i < size;i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}