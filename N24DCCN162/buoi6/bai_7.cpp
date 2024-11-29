#include <iostream>
using namespace std;
int main() {
    int m1, n1, m2, n2;
    cout << "Nhap so hang va so cot cua ma tran 1: "<<endl;
    cin >> m1 >> n1;
    cout << "Nhap so hang va so cot cua ma tran 2: "<<endl;
    cin >> m2 >> n2;
    if (m1 != m2 || n1 != n2) {
        cout << "Hai ma tran khong cung kich thuoc." << endl;
        return 0;
    }
    int A[m1][n1], B[m2][n2], C[m1][n1];
    cout << "Nhap cac phan tu cua ma tran A:" << endl;
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            cout << "Phan tu ma tran thu " << j + 1 << ": ";
            cin >> A[i][j];
        }
    }
    cout << "Nhap cac phan tu cua ma tran B:" << endl;
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            cout << "Phan tu ma tran thu " << j + 1 << ": ";
            cin >> B[i][j];
        }
    }
    for (int i = 0; i< m1; i++) {
        for (int j =0; j < n1; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "Ma tran tong la:" << endl;
    for (int i =0; i < m1; i++) {
        for (int j= 0; j < n1; j++) {
            cout<<C[i][j] << " ";
        }cout << endl;
    }return 0;
}
//khó quá a oi