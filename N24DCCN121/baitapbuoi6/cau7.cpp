#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n1, m1, n2, m2;
    cout << "Nhap ma tran thu 1" << endl << "Nhap so dong:";
    cin >> n1;
    cout << "Nhap so cot:";
    cin >> m1;
    cout << "Nhap ma tran thu 2" << endl << "Nhap so dong:";
    cin >> n2;
    cout << "Nhap so cot:";
    cin >> m2;
    if((n1 != n2) || (m1 != m2)){
        cout << "Hai ma tran khong cung kich thuoc";
    }else{
        int a[n1][m1], b[n1][m1];
        cout << "Nhap ma tran thu 1" << endl;
        for(int i = 0;i < n1;i++){
            for(int j = 0;j < m1;j++){
                cout << "Nhap phan tu dong " << i+1 << " cot " << j+1 << ":";
                cin >> a[i][j];
            }
        }
        cout << "Nhap ma tran thu 2" << endl;
        for(int i = 0;i < n1;i++){
            for(int j = 0;j < m1;j++){
                cout << "Nhap phan tu dong " << i+1 << " cot " << j+1 << ":";
                cin >> b[i][j];
            }
        }
        int c[n1][m1];
        cout << "Tong hai ma tran:" << endl;
        for(int i = 0;i < n1;i++){
            for(int j = 0;j < m1;j++){
                c[i][j] = a[i][j] + b[i][j];
                cout << c[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}