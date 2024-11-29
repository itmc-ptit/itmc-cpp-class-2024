#include<iostream>
using namespace std;
int sumOddNumbers(int arr[], int size)
{
    int sum0=0;
    for(int i=0;i<size;i++)
    {
        if (arr[i]%2!=0)
        {
            sum0+=arr[i];
        }
    }
    return sum0;
}
int main()
{
    cout<<"nhap so luong phan tu : ";
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"tong phan tu le la : "<<sumOddNumbers(arr,n);
    
}