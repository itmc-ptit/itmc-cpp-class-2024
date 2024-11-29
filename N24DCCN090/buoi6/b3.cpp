#include <iostream>
using namespace std;
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
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                {
                    arr[i]+=arr[j];
                    arr[j]=arr[i]-arr[j];
                    arr[i]-=arr[j];
                }
            }
        }
        cout<<"mang sau khi sap xep laf : \n";
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        
        delete []arr;
    }