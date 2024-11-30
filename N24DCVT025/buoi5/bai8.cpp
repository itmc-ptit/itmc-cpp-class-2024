#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cout<<"nhap chieu cao cua cau thong: ";cin>>n;
  for (int i = 1;i <= n;i++){
    for (int j = 1;j<=n-i;j++){
        cout<<" ";
    }
    for (int e = 1;e<=(2*i-1);e++){
        cout<<"*";
    }
        cout<<"\n";
  }
  for(int k=1;k<=n-1;k++){
    cout<<" ";
  }
  cout<<"*"<<"\n";
}
