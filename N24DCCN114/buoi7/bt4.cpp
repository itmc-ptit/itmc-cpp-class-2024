#include <iostream>
using namespace std;
int  sumOddNumbers(int arr[], int size){
    int sum=0;
    for (int i=0;i<size;i++){
        if (arr[i]%2!=0)
            sum +=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout <<"nhap do dai chuoi ";
    cin >>n;
    int A[n];
    cout <<"nhap cac phan tu cua chuoi ";
    for (int i=0;i<n;i++)
    {
        cin >>A[i];
    }
    cout <<"tong cac so le trong chuoi la ";
    cout <<sumOddNumbers(A,n);
}