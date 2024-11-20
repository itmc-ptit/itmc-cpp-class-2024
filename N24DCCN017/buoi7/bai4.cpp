#include<iostream>
using namespace std;
int sumoddnumbers(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            sum+=arr[i];
        }
    }
    return sum;
}

int main(){
    cout<<sumoddnumbers((int[]){1,2,3,6,7,9},6);
}
