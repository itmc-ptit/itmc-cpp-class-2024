#include <iostream>
using namespace std;
int main(){ 
    int n; 
    cout<<"nhap vao so luong phan tu ma tran: ";
    cin>>n;
    int a[n],t;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for (int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
for (int i=0;i<n;i++){
cout << a[i]<<' ';
}
return 0;
}


