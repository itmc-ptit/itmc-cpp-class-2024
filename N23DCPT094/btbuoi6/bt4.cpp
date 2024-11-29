#include <iostream>
#include <vector> 
using namespace std;

int main() {
    int n;
    cout << "Nhập số lượng phần tử của mảng: ";
    cin >> n;

    vector<int> a(n); 
    cout << "Nhập các phần tử của mảng:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Phần tử thứ " << i + 1 << ": ";
        cin >> a[i];
    }

    int maxCount = 0, mostFrequent;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = a[i];
        }
    }

    cout << "Phần tử có tần suất xuất hiện nhiều nhất: " << mostFrequent << endl;
    cout << "Số lần xuất hiện: " << maxCount << endl;

    return 0;
}
