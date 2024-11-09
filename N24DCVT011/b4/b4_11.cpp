#include <iostream>
using namespace std;
int main () {
    int n;
    cin >> n;
    int chuc = n / 10;
    int donvi = n % 10;
    if (n < 10) {
    switch (n) {
        case 1: cout << "một" ; break;
        case 2: cout << "hai" ; break;
        case 3: cout << "ba"  ; break;
        case 4: cout << "bốn" ; break;
        case 5: cout << "năm" ; break;
        case 6: cout << "sáu" ; break;
        case 7: cout << "bảy" ; break;
        case 8: cout << "tám" ; break;
        case 9: cout << "chín"; break;
        }
    } else if (n >=10 && n <= 20){
        switch (n) {
            case 10: cout << "mười "    ; break;
            case 11: cout << "mười một" ; break;
            case 12: cout << "mười hai" ; break;
            case 13: cout << "mười ba"  ; break;
            case 14: cout << "mười bốn" ; break;
            case 15: cout << "mười năm" ; break;
            case 16: cout << "mười sáu" ; break;
            case 17: cout << "mười bảy" ; break;
            case 18: cout << "mười tám" ; break;
            case 19: cout << "mười chín"; break;
        }
    } else {
        switch (chuc) {
            //case 1: cout << "" ; break;
            case 2: cout << "hai mươi " ; break;
            case 3: cout << "ba mươi "  ; break;
            case 4: cout << "bốn mươi " ; break;
            case 5: cout << "năm mươi " ; break;
            case 6: cout << "sáu mươi " ; break;
            case 7: cout << "bảy mươi " ; break;
            case 8: cout << "tám mươi " ; break;
            case 9: cout << "chín mươi "; break;
        }
    if (donvi != 0) {
        switch (donvi) {
            case 1: cout << " một" ; break;
            case 2: cout << " hai" ; break;
            case 3: cout << " ba"  ; break;
            case 4: cout << " bốn" ; break;
            case 5: cout << " năm" ; break;
            case 6: cout << " sáu" ; break;
            case 7: cout << " bảy" ; break;
            case 8: cout << " tám" ; break;
            case 9: cout << " chín"; break;
        }
    }
    }
}
