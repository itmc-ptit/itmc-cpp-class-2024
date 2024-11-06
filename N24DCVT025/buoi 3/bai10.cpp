using namespace std;
#include <bits/stdc++.h>
//10
int main(){
    char a,b;
    cout << "nhap a: ";cin>>a;
    if (a>='a' && a<='z'){
        b=a-32;
    }
    else {
        b=a+32;
    }
    cout<< b;
    return 0;
}