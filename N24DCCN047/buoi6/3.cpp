#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"nhập số lượng phần tử: ";
    cin>>a;

    int arr[a];
    cout<<"nhập các phần tử của mảng:";
    for (int i = 0; i < a; i++) cin>>arr[i];

    bool co;
    for (int i = 0; i < a; i++){
        co = false;
        for (int j = 0; j < a - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                co = true;
            }
        }
        if (!co) break;
    }
    cout<<"mảng được sắp xếp là: ";
    for (int i = 0; i < a; i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}