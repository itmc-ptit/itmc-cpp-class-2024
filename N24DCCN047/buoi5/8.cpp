//Cây thông basic
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"nhập chiều cao cây thông: ";
    cin>>a;

    for (int i = 1 ; i <= a; i++){

        for (int p = 1; p <= a-i ; p++){
            cout<<" ";
        }

        for (int o = 1; o <= i*2 - 1; o++){
            cout<<"*";
        }
        cout<<endl;
    }

    for (int p = 1; p <= a-1 ; p++){
            cout<<" ";
    }

    cout<<"*";
    
    return 0;
}