#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Nhap so phan tu:";
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cout << "Nhap phan tu thu " << i+1<< ":";
        cin >> a[i];
    }
    for(int i = 0;i < (n-1);i++){
        for(int j = (i+1);j < n;j++){
            if(a[i] >= a[j]){
                int temp = int(a[j]);
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i = 0;i < n;i++){
        cout << a[i] << " ";
    }
    return 0;
}