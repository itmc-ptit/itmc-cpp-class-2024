#include <iostream>
#include <map> 

using namespace std;
int main() {
    int n ;
    cin >> n ;
    int arr[n];
    map <int , int> arr1 ;
    for(int i = 0 ; i < n ; i++){
        cin>> arr[i];
        arr1[arr[i]] = arr[i] ;
    }
    cout << "So lon nhat la:" << arr1.rbegin()->first << endl ;
    cout << "So nho nhat la:" << arr1.begin()->first  ;
    return 0;
}
