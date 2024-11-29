# include <iostream>
using namespace std;
int findMin (int arr[], int size) {
    int min = arr[0];
    for (int i =1; i < size ; i++) {
        if (arr[i] < min ) {
            min = arr[i];
        }
    }
    return min;
}
int main () {
    int arr[] = {1,3,5,7,1,2,1};
    int size = sizeof(arr) / sizeof (arr[0]);
    cout << "gia tri nho nhat la: " << findMin(arr, size) << endl;
    return 0;
}