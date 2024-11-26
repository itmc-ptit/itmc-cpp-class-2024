#include <iostream>
#include <vector>
using namespace std;
void chen13(vector<int>& arr) {
    int n = arr.size();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            arr.insert(arr.begin() + i + 1, 13);
            break;
        }
    }
}
int main() {
    int n;
    cout <<"Nhap so luong phan tu cua mang: "<<endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout<< "Phan tu thu " << i + 1 << ": ";
        cin>> arr[i];
    }
    chen13(arr);
    cout <<"Mang sau khi chen: ";
    for (int num : arr) {
        cout<<num<<" ";
    }
    cout << endl;
    return 0;
}