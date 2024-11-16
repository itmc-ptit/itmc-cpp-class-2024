#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n,x;
    cout<<"nhap so luong ptu: ";cin>>n;
    cout<<"nhap ptu: ";
    for(int i=0;i<=n-1;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=n-1;i>=0;i--){
        if(v[i]%2){
            v.insert(v.begin()+i,13);
            break;
        }
    }
    for(int i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }
}