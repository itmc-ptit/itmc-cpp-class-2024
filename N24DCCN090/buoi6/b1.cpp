#include <iostream>
using namespace std;
      int main()
      {
        int n ,sum0 ,tichs;
        sum0=0;
        tichs=1;

        cout<<"so phan tu : ";
        cin>> n;
        int* arr =new int[n];
        
        for(int i=0;i<n;i++)
        {
            cin>> arr[i];
            sum0 = sum0+arr[i];
            tichs =tichs*arr[i];
        }
        
        cout<<"tong : "<<sum0;
        cout<<"tich : "<<tichs;
        cout<<"tb cong : "<<(float) sum0/(n-1);
        
        delete []arr;
      }
