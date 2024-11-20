#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"nhap so luong phan tu cua mang: ";
    cin>>n;
    vector<int>a;
    cout<<"nhap phan tu mang: ";
    for (int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
    }
    for (int i=0;i<a.size();i++){
        if(a[i]%2==0){
            a.erase(a.begin()+i);
            break;
            }
    }
    cout<<"mang moi: ";
    for (int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
    return 0;
}