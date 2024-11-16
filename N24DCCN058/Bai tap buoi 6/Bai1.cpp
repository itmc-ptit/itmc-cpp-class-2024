#include <iostream>
#include <vector> 

using namespace std;
int main() {
    int n , S = 0 , P = 1 ;
    cin >> n ;
    vector<int> arr(n) ;
    for(int i = 0 ; i < n ; i++){cin>> arr[i];}
    for(int i = 0 ; i < n ; i++){
        S += arr[i];
        P *= arr[i];
    }
    cout << "Tong: " << S  << endl ; 
    cout << "Tich: " << P << endl ;
    cout << "Trung Binh Cong: " << S/n << endl ; 

    return 0;
}
