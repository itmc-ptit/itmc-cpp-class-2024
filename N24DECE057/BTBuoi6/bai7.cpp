#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector <vector<int>> v1;
    vector <vector<int>> v2;
    int m,n;
    cout<<"Nhap so hang va cot mang thu 1 : ";cin>>m>>n;
    for (int i=0;i<m;i++) {
        vector <int> v;
        for (int j=0;j<n;j++) {
            int x;cin>>x;
            v.push_back(x);
        }
        v1.push_back(v);
    }
    int p,q;
    cout<<"Nhap so hang va cot mang thu 2 : ";cin>>p>>q;
    for (int i=0;i<p;i++) {
        vector <int> v;
        for (int j=0;j<q;j++) {
            int x;cin>>x;
            v.push_back(x);
        }
        v2.push_back(v);
    }
    if (m!=p || n!=q) cout<<"Hai ma tran khong cung kich thuoc";
      else {
        cout<<"Ma tran tong : "<<endl;
        for (int i=0;i<m;i++)
         for (int j=0;j<n;j++) v1[i][j]+=v2[i][j];
        for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) cout<<v1[i][j]<<" ";
            cout<<endl;
        }
      }
    return 0;
}