#include <iostream>
using namespace std;

string docSoHangDonVi(int n) {
    switch (n) {
        case 1: return "mot";
        case 2: return "hai";
        case 3: return "ba";
        case 4: return "bon";
        case 5: return "nam";
        case 6: return "sau";
        case 7: return "bay";
        case 8: return "tam";
        case 9: return "chin";
        default: return "";
    }
}

string docSo(int n) {
    if (n == 0) return "khong";
    if (n < 10) return docSoHangDonVi(n);
    
    int hangChuc = n / 10;
    int hangDonVi = n % 10;
    string ketQua = "";

    if (hangChuc == 1) {
        ketQua = "muoi";
    } else {
        ketQua = docSoHangDonVi(hangChuc) + " muoi";
    }

    if (hangDonVi != 0) {
        if (hangDonVi == 5 && hangChuc != 0) {
            ketQua += " lam";  
        } else if (hangDonVi == 1 && hangChuc > 1) {
            ketQua += " mot"; 
        } else {
            ketQua += " " + docSoHangDonVi(hangDonVi);
        }
    }

    return ketQua;
}

int main() {
    int n;
    cout << "Nhap mot so n (n < 100): ";
    cin >> n;

    if (n >= 0 && n < 100) {
        cout << "Cach doc: " << docSo(n) << endl;
    } else {
        cout << "So khong hop le. Vui long nhap so nho hon 100." << endl;
    }

    return 0;
}