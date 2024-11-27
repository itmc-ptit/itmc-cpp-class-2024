#include<iostream>
using namespace std;
int sumOddNumbers(int arr[], int size) 
{
    
    int dem=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]%2!=0)
        {
            dem=dem+arr[i];
        }
    }
    return dem;
}
int main()
{
    int a[]={1,2,3,4,5,6,7};
    int size = sizeof(a);
    cout << sumOddNumbers(a, size);
}