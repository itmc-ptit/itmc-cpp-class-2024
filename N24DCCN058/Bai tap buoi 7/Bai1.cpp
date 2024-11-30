#include <bits/stdc++.h>

using namespace std ;

int MinArr (int arr[] ,int n ){
    int Min = arr[1];
    for (int i = 1 ; i < n ; i++){
        if ( Min > arr[i]){
            Min = arr[i];
        }
    }
    return Min ; 
}
 
 int main() {
    int n ;
    cin >> n ; 
    int arr[n];
    for ( int i = 0 ; i < n ; i ++ ){
        cin >> arr[i];
    }
    int m = MinArr(arr , n );
    cout << m ; 
 }
 