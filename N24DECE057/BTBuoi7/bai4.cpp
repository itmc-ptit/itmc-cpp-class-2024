#include <iostream>
using namespace std;
int sumOddNumbers(int arr[],int size) {
    int sum=0;
    for (int i=0;i<size;i++) 
     if (arr[i]%2!=0) sum+=arr[i];
    return sum;
}
int main() {
    int a[5]={1,3,5,2,4};
    cout<<sumOddNumbers(a,5);
}