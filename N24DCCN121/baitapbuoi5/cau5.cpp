#include <iostream>
using namespace std;

int main(){
    int a, dem;
    cout << "Nhap so:";
    cin >> a;
    if(a <= 2){
        cout << "Khong co so nguyen to nho hon " << a;
    }else{
        for(int i = 2;i < a;i++){
            int dem =0;
            for(int j = 2;j < i;j++){
                if((i % j) == 0){
                    dem++;
                    break;
                }
            }
        if(dem == 0){
        cout << i << " ";
        }
        }
    }
    return 0;
}