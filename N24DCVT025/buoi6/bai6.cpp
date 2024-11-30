//6
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
    if (n%2==0){
        v.insert(v.begin()+(n-2),13);
    } else{
        v.insert(v.begin()+(n-1),13);
    }
    for(int i=0;i<n+1;i++){
        cout<<v[i]<<" ";
    }
}