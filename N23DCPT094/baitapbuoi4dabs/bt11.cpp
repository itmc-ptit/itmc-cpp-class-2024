#include <iostream>
using namespace std;

string docSoDonVi(int n) {
    switch (n) {
        case 0: return "không";
        case 1: return "một";
        case 2: return "hai";
        case 3: return "ba";
        case 4: return "bốn";
        case 5: return "năm";
        case 6: return "sáu";
        case 7: return "bảy";
        case 8: return "tám";
        case 9: return "chín";
        default: return "";
    }
}

string docSo(int n) {
    if (n < 0 || n >= 100) {
        return "Số không hợp lệ!";
    }

    if (n < 10) {
        return docSoDonVi(n);
    }

    int hangChuc = n / 10;
    int hangDonVi = n % 10;

    string ketQua = "";

    if (hangChuc == 1) {
        ketQua = "mười";
    } else {
        ketQua = docSoDonVi(hangChuc) + " mươi";
    }

    if (hangDonVi == 1 && hangChuc > 1) {
        ketQua += " mốt";
    } else if (hangDonVi == 5 && hangChuc > 0) {
        ketQua += " lăm";
    } else if (hangDonVi != 0) {
        ketQua += " " + docSoDonVi(hangDonVi);
    }

    return ketQua;
}

int main() {
    int n;
    cout << "Nhập vào một số nguyên nhỏ hơn 100: ";
    cin >> n;

    cout << "Cách đọc: " << docSo(n) << endl;

    return 0;
}
