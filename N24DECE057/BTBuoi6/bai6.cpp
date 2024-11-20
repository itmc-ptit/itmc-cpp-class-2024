#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout<<"Nhap so luong phan tu : ";cin>>n;
    int a[n];
    vector <int> v;
    for (int i=0;i<n;i++) {
        cout<<"Nhap phan tu thu "<<i+1<<" : ";
        cin>>a[i];
        v.push_back(a[i]);
    }
    int vt;
    for (int i=n-1;i>=0;i--) {
        if (a[i]%2!=0) {
            vt=i; 
            break;
        }
    }
    v.insert(v.begin()+vt+1,13);
    for (auto it:v) cout<<it<<" ";
    return 0;
}