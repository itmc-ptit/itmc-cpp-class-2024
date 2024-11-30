#include <bits/stdc++.h>

using namespace std;
int main() {
    int n ;
    cin >> n ; 
    vector<int> arr(n);
    for (int i = 0 ; i < n ; i++){cin >> arr[i] ;}
    for ( int i = n - 1 ; i > 0 ; i--){
        if ( arr[i]%2 != 0){
            arr.insert(arr.begin() + i + 1, 13);
            break ; 
        }
    } 
    for ( int i = 0 ; i < arr.size() ;i++){cout << arr[i] << " ";}
    return 0;
}
