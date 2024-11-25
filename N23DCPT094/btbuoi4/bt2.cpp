#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Nhập tọa độ điểm thứ nhất (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Nhập tọa độ điểm thứ hai (x2, y2): ";
    cin >> x2 >> y2;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "Khoảng cách giữa hai điểm là: " << distance << endl;

    return 0;
}
