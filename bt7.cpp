//tong hai mtran
#include <iostream>
using namespace std;
int main(){
	int m,n,p,q;  
	cin>>m>>n>>p>>q;
if (m != p|| n != q||(m!=p&&n!=p)) {
      cout << "hai mtran co kich thuoc khac nhau!" << endl;
    }
 else{
 	p=m;q=n;
 	int A[m][n];
	int B[m][n];
	cout << "nhap ma tran A: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cout<<"nhap ma tran B: "<<endl;
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
        	cin>>B[i][j];
        }
    }
 	int sum[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    cout << "mtran tong: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << sum[i][j] << " ";
        }
	    cout<<endl;
    }
    }
return 0;
}
    
