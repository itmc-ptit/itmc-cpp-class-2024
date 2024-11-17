#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Nhap mot so nho hon 100: ";
    cin >> n;
    if (n < 0 || n >= 100) {
        cout << "Vui long nhap so nho hon 100." << endl;
    } else {
        string hangChuc[] = {"", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", 
                             "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
        string hangDonVi[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
        int chuc = n / 10;
        int donVi = n % 10;
        if (chuc == 0) {
            cout << hangDonVi[donVi] << endl;
        } else if (chuc == 1) {
            if (donVi == 0) {
                cout << "muoi" << endl;
            } else {
                cout << "muoi " << hangDonVi[donVi] << endl;
            }
        } else {
        
            if (donVi == 0) {
                cout << hangChuc[chuc] << endl;
            } else {
                cout << hangChuc[chuc] << " " << hangDonVi[donVi] << endl;
            }
        }
    }

    return 0;
}
