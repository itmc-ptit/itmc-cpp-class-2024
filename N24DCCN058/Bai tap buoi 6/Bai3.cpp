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
        arr1[arr[i]] += 1 ;
    }
    for( auto& index : arr1){
        for (int i = 0 ; i < index.second ; i++){
            cout << index.first << " " ;
        }
    }    
    return 0;
}
