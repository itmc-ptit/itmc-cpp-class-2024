#include <iostream>
using namespace std;
    int main()
    {
        int n, max1, min1;
        cout <<"nhap so phan tu : ";
        cin >>n;

        int* arr=new int[n];
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
            if (i==0)
            {
                max1=arr[i];
                min1=arr[i];
            }
           
            if (max1<arr[i]) {max1=arr[i];}
            if (min1>arr[i]) {min1=arr[i];}
        } 
        cout<<"max : "<<max1<<endl;
        cout<<"min : "<<min1;  

        delete []arr; 
    }