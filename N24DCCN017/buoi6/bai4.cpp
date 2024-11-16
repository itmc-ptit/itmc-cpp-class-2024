#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"nhap so luong ptu: ";cin>>n;
    cout<<"nhap cac ptu: ";
    int a[n];
    for(int i=0;i<=n-1;i++){
        cin>>a[i];
    }
    int min=a[0],max=0;
    for(int i=0;i<=n-1;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    int b[max-min+1]={};
    for(int i=0;i<=n-1;i++){
        b[a[i]-1]+=1;
    }
    int m1,m2;
    for(int i=0;i<=max-min;i++){
        if(m1<b[i]){
            m1=b[i];
            m2=i+1;
        }
    }
    cout<<"so xuat hien nhieu nhat la: "<<m1<<" xuat hien "<<m2<<" lan";

}