#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cout<<"nhap so luong ptu: ";cin>>n;
    cout<<"nhap ptu: ";
    for(int i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<=n-1;i++){
        if(!(v[i]%2)){
            v.erase(v.begin()+(i));
            break;
        }
    }
    for(int i=0;i<=n-2;i++){
        cout<<v[i]<<" ";
    }
}