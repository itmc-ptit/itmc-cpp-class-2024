#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout <<"moi nhap so cay thong ";
    cin >>n;
    cout <<"moi nhap chieu cao cay thong ";
    cin >>m;





    
    for (int i=1;i<=m;i++)
    {
        for (int t=1;t<=n;t++){
            for(int j=1;j<=m-i;j++)
            {
                cout <<" ";
            }
            for(int j=1;j<=2*i-1;j++)
            {
                cout <<"*";
            }
            for(int j=1;j<=m-i;j++)
            {
                cout <<" ";
            }
        }
        cout <<endl;
    }
    for (int i=1;i<=m;i++){
        if(i==m){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
    for (int t=1;t<n*(2*m-1);t++){
        if(t%(2*m-1)==0){
            cout <<"*";
        }
        else{
            cout <<" ";
        }
    }
    

}
