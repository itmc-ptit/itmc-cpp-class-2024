#include <iostream>
using namespace std;
int main() {
	int n1,m1,n2,m2;
	cout << "Nhap kich thuoc cua  ma tran a: ";
	cin>>n1>>m1;
	cout << "Nhap kich thuoc cua  ma tran b: ";
	cin>>n2>>m2;
	int A[n1][m1], B[n2][m2], S[n1][m1];
	if (n1!=n2||m1!=m2){
	    cout<<"hai ma tran khac kich thuoc!";
	}else{
	    cout << "Nhap cac phan tu cua ma tran A:\n";
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m1; j++) {
                cin >> A[i][j];
            }
        } 
        cout << "Nhap cac phan tu cua ma tran B:\n";
        for (int i = 0; i < n2; i++) {
            for (int j = 0; j < m2; j++) {
                cin >> B[i][j];
            }
        }
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m1; j++) {
                S[i][j] = A[i][j] + B[i][j];
            }
        }
        cout << "Tong 2 ma tran:\n";
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m1; j++) {
                cout << S[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
    