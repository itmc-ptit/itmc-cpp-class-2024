#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so luong phan tu : ";cin>>n;
    vector <int> v;
    int a[n];
    for (int i=0;i<n;i++) {
        cout<<"Nhap phan tu thu "<<i+1<<" : ";
        cin>>a[i];
        v.push_back(a[i]);
    }
    int i=0;
    while (v[i]%2!=0 && i<v.size()) i++;
    if (i==v.size()) {
        for (auto it:v) cout<<it<<" ";
    } else {
        v.erase(v.begin()+i);
        for (auto it:v) cout<<it<<" ";
    }
    return 0;
}