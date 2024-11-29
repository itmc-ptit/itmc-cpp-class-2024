#include <iostream>
#include <vector>
using namespace std;
    int main()
    {
        vector <int> n;
        int d,k,c,m;
        cout <<"nhap phan n  tu : ";  
        k=0;d=0;cin>>m;
        for(int i=0;i<m;i++)
        {   
            cin>>c;
            n[i]=c;
            if ( c % 2==0 && k==0)
            {
                k=1;
                d=i;
            }
        }
        n.erase(n.begin() + d);
        cout<<"mang sau khi xoa la : ";
        for(int i=0;i<(m-1);i++)
        {
            cout<<n[i]<<" ";
        }
    }   
