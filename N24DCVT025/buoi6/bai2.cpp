//2 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a[100],max,min;
    cout<<"nhap so luong ptu vao mang: ";cin>>n;
    for (int i=0;i<n;i++){
        cout<<"nhap ptu thu "<<i+1<<": ";cin>>a[i];
    }
    min=a[0];
    max=a[0];
    for(int j=1;j<n;j++){
        if(a[j]<min){
            min=a[j];
        }
        if(a[j]>max){
            max=a[j];
        }
    }
    cout<<"gtri lon nhat trong mang: "<<max<<"\n";
    cout<<"gtri nho nhat trong mang: "<<min<<"\n";
}