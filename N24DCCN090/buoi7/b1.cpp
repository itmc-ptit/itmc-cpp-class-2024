#include <iostream>
using namespace std;
    int findMin(int* arr,int n)
    {       
        int max1, min1;
        for(int i=0;i<n;i++)
        {
            if (i==0)
            {
                max1=arr[i];
                min1=arr[i];
            }
           
            if (max1<arr[i]) {max1=arr[i];}
            if (min1>arr[i]) {min1=arr[i];}
        }
        return min1;
    }
    int main()
    {
        int n;
        cout <<"nhap so phan tu : ";
        cin >>n;

        int* arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];  
        } 
        cout<<"min : "<<findMin(arr,n);  

        delete []arr; 
    }