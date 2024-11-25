#include <iostream>
using namespace std;
int main() {
    for (int i = 2 ; i < 10 ; i++){
        cout << "Bang cuu chuong " << i << endl ; 
        for(int j = 1 ; j < 11 ;j++){
            cout << j*i << endl ;
        }
    }
    return 0;
}
