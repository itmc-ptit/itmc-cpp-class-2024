#include <iostream>
using namespace std;
int main() {
    int so;
    cout << "Hay nhap 1 so: ";
    cin >> so;
    int n =0; 
    for (int i=1;i<= so/2; i++) {
        if (so % i == 0) {
            n += i;
        }
    }
    if(n == so && so > 0){
        cout<<so<< " la so hoan hao";
    } else {
        cout<<so<<" khong phai so hoan hao";
    }
return 0;
}
