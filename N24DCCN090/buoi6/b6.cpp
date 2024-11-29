#include <iostream>
#include <vector>
using namespace std;
    int main()
    {
        vector <int> n;
        int d,m,k;
        cout <<"nhap phan tu so : ";  cin>>m;
        d=0;
        for(int i=0;i<m;i++)
        {   
            cin>>k;
            n.push_back(k);
            if ( k % 2!=0)
            {
                d=i;
            }
        }
        n.insert(n.begin() + d, 13);
        cout<<"mang sau khi them la : ";
        for(int i=0;i<n.size();i++)
        {
            cout<<n[i]<<" ";
        }
    }   
