//5
#include <bits//stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    int n,x;
    cout<< "nhap so phan tu: ";cin>>n;
    for (int i=0;i<n;i++){
        cout<<"nhap ptu thu "<<i+1<<": ";cin>>x;
        v.push_back(x);
    }
    if (n==0){
        cout<<"k co ptu nao trong mang";
    }else{
        v.erase(v.begin()+0);
    }
    for (int i: v){
        cout<<i<<" ";
    }
}