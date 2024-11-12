#include <iostream>
using namespace std;
int main() {
    float soThuc;
    cin >> soThuc;
    float thapphan = soThuc - static_cast<int>(soThuc);
    cout << "Phan thap phan cua so vua nhap: " << thapphan << endl;
    return 0;
}

