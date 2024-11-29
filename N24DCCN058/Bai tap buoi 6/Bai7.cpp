#include <bits/stdc++.h>

using namespace std;
int main() {
    int n , m , p , q ;
    cout << "Nhap kich thuoc ma tran 1 :" << endl ;
    cin >> n >> m ; 
    cout << "Nhap kich thuoc ma tran 2 :" << endl ;
    cin >> p >> q ; 
    if ( n != q && m != q ){
        cout << "khong cung kich thuoc";
    }else{
        vector<vector<int>> arr(n ,vector<int>(m)) , arr1(p , vector<int>(q));
        cout << "Nhap ma tran 1 " << endl ; 
        for (int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> arr[i][j];
            }
        }
        cout << "Nhap ma tran 2" << endl ; 
        for (int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cin >> arr1[i][j];
            }
        }
        cout << "Tong Hai Ma Tran La :"<< endl ;
        for (int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < m ; j++){
                cout << arr1[i][j] + arr[i][j] << " ";
            }
            cout << endl ; 
        }
    }    
    return 0;
}
