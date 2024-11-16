#include <iostream>

using namespace std;
int main() {
    int n , chan = 0 , le = 0;
    cin >> n ; 
    while (n >= 0){
        n%2 == 0 ? chan++ : le++ ;
        cin >> n ; 
    }
    cout << "Co " << chan << " so chan" << endl ;
    cout << "Co " << le << " so le" << endl ;
    return 0;
}
