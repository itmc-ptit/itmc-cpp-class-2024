#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Nhap n ";
    cin >> n;
    int dem;
    cout <<n<<"=";
    for(int i=2;i<=n;i++){
        dem=0;
        while(n%i==0){
            dem++;
            n/=i;
        }
        if (dem){
            cout <<i;
            if(dem>1) 
                cout <<"^"<<dem;
            if(n>i){
                cout <<"x";
            }
        }
    }
    
}