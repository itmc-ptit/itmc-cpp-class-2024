#include <iostream>
using namespace std;
int findMin(int arr[],int size) {
    int nn=INT_MAX;
    for (int i=0;i<size;i++) nn=min(nn,arr[i]);
    return nn;
}
int main() {
    int n;cin>>n;
    int a[n];
    for (int i=0;i<n;i++) cin>>a[i];
    cout<<findMin(a,n);
}