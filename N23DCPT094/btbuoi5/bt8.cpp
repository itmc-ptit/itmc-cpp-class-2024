#include <iostream>
using namespace std;

int main() {
    int ccao;
    cout << "Nhập chiều cao của cây thông: ";
    cin >> ccao;

    for (int i = 1; i <= ccao; i++) {             
        for (int j = 1; j <= ccao - i; j++) {      
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {     
            cout << "*";
        }
        cout << endl;                               
    }

    return 0;
}
