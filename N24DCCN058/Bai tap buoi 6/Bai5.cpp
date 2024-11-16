#include <bits/stdc++.h>

using namespace std;
int main() {
    int n ;
    bool first = true ;
    cin >> n ; 
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
        if (arr[i]%2 == 0 && first){
            cin >> arr[i] ;
            n--;
            first = false ;
        }
    }
    for (int i = 0 ; i < n ; i++){cout << arr[i] << " ";}
    return 0;
}
