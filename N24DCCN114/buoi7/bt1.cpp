#include <iostream>
using namespace std;
int findMin(int arr[],int size)
{
    int min=arr[0];
    for (int i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    int A[]={5,8,9,7,4,6,3,2};
    cout <<findMin(A,sizeof(A)/sizeof(int));
}
