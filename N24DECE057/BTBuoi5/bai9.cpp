#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cout<<"Nhap n va m : ";cin>>n>>m;
    int i=1,k=m*2-2,a=1;
    while (i<=m) {
        int j=1;
        while (j<=n) {
            if (j==1) 
			  for (int o=1;o<=k/2;o++) cout<<" "; 
                else { for (int o=1;o<=k;o++) cout<<" ";
                          for (int o=1;o<=a;o++) cout<<"*";
                        }
        j++;
        }
        cout<<endl;
        k-=2;
        a+=2;
        i++;
    }
    k=m;
    for (int i=1;i<=(m*2*n)-n;i++) {
       if (i==k) {
        cout<<"*";
        k+=(m*2)-1;
       } else cout<<" ";
    }
    return 0;
}
