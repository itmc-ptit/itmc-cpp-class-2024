#include <bits/stdc++.h>

using namespace std ;

int fibonanci(int n ){
    int arr[2] =  {0 ,1};
    if (n < 2 ){return arr[n];}
    for ( int i = 2 ; i <= n ; i++ ){
        int k = arr[1];
        arr[1] += arr[0] ;
        swap(arr[0] , k) ;
    }
    return arr[1];
}
 
int main() {
    int n ;
    cin >> n ;
    cout << fibonanci(n);
}
 