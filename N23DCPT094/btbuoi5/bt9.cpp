#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Nhập số lượng cây thông: ";
    cin >> n;
    cout << "Nhập số tầng của mỗi cây thông: ";
    cin >> m;

    for (int i = 1; i <= m; i++) {                  
        for (int tree = 1; tree <= n; tree++) {     
            for (int j = 1; j <= m - i; j++) {      
                cout << " ";
            }
            for (int k = 1; k <= (2 * i - 1); k++) { 
                cout << "*";
            }
            cout << "   ";                          
        }
        cout << endl;                               
    }

    return 0;
}
