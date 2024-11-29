//Cây thông advance 😭
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"nhập số cây thông: ";
    cin>>b;
    cout<<"nhập chiều cao cây thông: ";
    cin>>a;

    for (int i = 1 ; i <= a; i++){
        for (int cay = 0; cay < b; cay++){

            for (int p = 1; p <= a-i ; p++){
                cout<<" ";
            }

            for (int o = 1; o <= i*2 - 1; o++){
                cout<<"*";
            }

            for (int u = 1; u <= a-i ; u++){
                cout<<" ";
            }
        }
        
        cout<<endl;
    }

    for (int cay = 0; cay < b; cay++){

        for (int p = 1; p <= a-1 ; p++){
            cout<<" ";
        }

        cout<<"*";

        for (int u = 1; u <= a-1 ; u++){
            cout<<" ";
        }
    }
    return 0;
}