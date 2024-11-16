#include <iostream>
using namespace std;
int main() {
    int n ;
    cin >> n ;
    while ( n != 24){
        n < 24 ? cout << "Nho hon so can doan" : cout << "Lon hon so can doan" ;
        cout << endl ; 
        cout << "Nhap du doan cua ban :" ;
        cin >> n ; 
    }
    cout << "ban doan dung roi" ;
    return 0;
}
