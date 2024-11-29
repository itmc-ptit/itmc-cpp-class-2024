#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    for (int i = 0;i < n;i++) {
        if (arr[i] % 2 == 0) {
            arr.erase(arr.begin() + i);
            break;
        }
    }
    for (int i : arr) cout << i << " ";
    return 0;
}