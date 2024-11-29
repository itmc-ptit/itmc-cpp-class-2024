#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"nhập số lượng phần tử: ";
    cin >> a;

    int arr[a];
    cout<<"nhập các phần tử của mảng: ";
    for (int i = 0; i < a; i++) cin>>arr[i];

    int max = 0; int kq = arr[0];
    for (int i = 0; i < a; i++){
        int count = 0;
        for (int j = 0; j < a; j++){
            if (arr[i] == arr[j]) count++;
        }
        if ( max < count ){
            max = count;
            kq = arr[i];
        }
    }
    cout << "phần tử nhiều nhất là: " <<kq<< "\n" << "số lượng là: "<< max <<endl;
    return 0;
}