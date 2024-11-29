#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, a;
    cout << "Nhap so phan tu:";
    cin >> n;
    vector<int> v;
    for(int i = 0;i < n;i++){
        cout << "Nhap phan tu thu " << i+1<< ":";
        cin >> a;
        v.push_back(a);
    }
    for(int i = (n+1);i >= 0;i--){
        if(v[i] % 2 != 0){
            v.insert(v.begin() + (i) + 1, 13);
            break;
        }
    }
    for (int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}