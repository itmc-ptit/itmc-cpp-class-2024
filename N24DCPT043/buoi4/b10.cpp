#include <iostream>
#include <cmath>
using namespace std;
string ngaytrongtuan (int day) {
    switch (day) {
        case 1: return "Sunday";
        case 2: return "Monday";
        case 3: return "Tuesday";
        case 4: return "Wednesday";
        case 5: return "Thursday";
        case 6: return "Friday";
        case 7: return "Saturday";
        default: return "Ngay khong hop le";
    }
}
int main() {
    int day;
    cout << "Nhap so ngay trong tuan (1-7): ";
    cin >> day;
    cout << "Ten ngay trong tieng Anh la: " << ngaytrongtuan (day)<< endl;
return 0;
}

    
