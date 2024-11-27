#include<iostream>
using namespace std;
int findmin(int arr[],int size){
    int min=arr[0];
    for(int i=1;i<size;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    cout<<findmin((int []){7, 3, 9, 12, 8, 4, 1},7);
}