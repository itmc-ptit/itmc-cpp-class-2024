#include <iostream>
using namespace std;
    int main()
    {
        int n, d, k, m;
        cout <<"nhap so phan tu : ";
        cin >>n;

        int* a=new int[n];
        
        for(int i=0;i<n;i++)
                            {
            cin>> a[i];
          
        }
        d=0;m=0;int kt;
        for(int i=0;i<n;i++)
        {
            
          
             
                kt=1;
                for(int j=i+1;j<n;j++)
                {   
                    if (a[i]==a[j]) 
                    {   
                        kt++;
                    } 
                }

                if (d<=kt) 
                {
                 d=kt;
                 k=i;
                }
           
                if (d==kt) 
                {
                    m=kt;
                }
                kt=0;
        }
        

        if(d==m)
        {
        cout<< "phan tu xuat hien nhieu nhat laf: "<<a[k]<<endl;
        cout <<"so lan xuat hien la : "<<d;
        } else 
        {
            cout<<" ko cos phan tu xuat hien nhieu nhat!!!!";
        }   
        delete[]a;
    }
