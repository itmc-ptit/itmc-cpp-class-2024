#include <bits/stdc++.h>

using namespace std;
int main() {
    int n , Maxappear = 0 ;
    cin >> n ;
    int arr[n];
    vector<int> firstappear , Save ;
    map <int , int> arr1 ;
    for(int i = 0 ; i < n ; i++){
        cin>> arr[i];
        if ( arr1[arr[i]] == 0){firstappear.push_back(arr[i]);}
        arr1[arr[i]] ++ ;
    }
    
    for (int i = 0 ; i < firstappear.size(); i++){
        if ( Maxappear < arr1[firstappear[i]]){
             Maxappear = arr1[firstappear[i]];
             Save.clear() ;
             Save.push_back(firstappear[i]);
        }else if ( Maxappear == arr1[firstappear[i]]){
            Save.push_back(firstappear[i]);
        }
    }

    for (int i = 0 ; i < Save.size() ;i++){cout << Save[i] << endl ;}
    cout << "So Lan " << Maxappear ;
    return 0;
}
