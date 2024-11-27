#include<iostream>
#include<math.h>
using namespace std;

int findMin(int arr[], int size)
{
    
    int dem=arr[0];
    for(int i=0; i<size-1; i++)
    {
        dem=min(dem, arr[i+1]);
    }
    return dem;
}

int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a);
    cout << findMin(a, 5);

     
}