#include <iostream>
using namespace std;

int main(){
    int n, m;
    int dem = 1;
    cout << "Nhap so cay:";
    cin >> n;
    cout << "Nhap so tang:";
    cin >> m;
    for(int i = 1;i <= m;i++){
        for(int j = 1;j <= n;j++){
            for(int k = int(m-i);k > 0;k--){
                cout << " ";
                continue;
            }
            for(int l = 1;l <= dem;l++){
                cout << "*";
                continue;
            }
            for(int k = int(m-i);k > 0;k--){
                cout << " ";
                continue;
            }
        }
        dem += 2;
        cout << endl;
    }
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= (m-1);j++){
            cout << " ";
            continue;
        }
        cout << "*";
        for(int j = 1;j <= (m-1);j++){
            cout << " ";
            continue;
        }
    }
    return 0;
}