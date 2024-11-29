#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"nhập số lượng phần tử: ";
    cin>>a;

    int arr[a];
    cout<<"nhập các phần tử của mảng:";
    for (int i = 0; i < a; i++) cin>>arr[i];

    bool kt = false;
    for (int i = a - 1; i>=0 ; i-- ){
        if (arr[i]%2 != 0){
            for (int j = a; j > i; j--){
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = 13;
            a++;
            kt = true;
            break;
        }
    }
    if (!kt) cout<<"thua";
    else {
        cout<<"mảng sau là: ";
        for (int i = 0; i < a; i++) cout<<arr[i]<<" ";
    }
    return 0;
}