#include <bits/stdc++.h>

using namespace std ;

int sumOddNumbers(int arr[], int size){
    int Sum = 0 ; 
    for (int i = 0 ; i < size ; i ++ ){
        if ( arr[i]%2 != 0){Sum += arr[i];}
    }
    return Sum ;  
}
 
int main() {
    int n ; 
    cin >> n ;
    int arr[n] ;
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    } 
    cout << sumOddNumbers(arr , n);
}
 