#include<iostream>
using namespace std;
int main(){
    int n,max,min;
    cout<<"nhap vao so lương phan tu ma tran:";
    cin>>n;
    int a[n];
    for (int i=0; i<n;i++){
        cin>>a[i];
    }
    max=a[0];
    min=a[0];
    for (int i=0;i<n;i++){
        if (a[i]>max){
            max=a[i];
        }
        if (a[i]<min){
            min=a[i];
        }
    }
    cout<<"Max:"<<max<<endl;
    cout<<"Min:"<<min<<endl;
    return 0;
}
    