#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so luong phan tuong:";
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cout << "Nhap phan tu thu " << i+1<< ":";
        cin >> a[i];
    }
    int min = a[0];
    int max = a[0];
    for(int i =0 ;i < n;i++){
        if(min >= a[i]){
            min = a[i];
        }
        if(max <= a[i]){
            max = a[i];
        }
    }
    cout << "Gia tri lon nhat: " << max << endl << "Gia tri nho nhat: " << min;
    return 0;
}