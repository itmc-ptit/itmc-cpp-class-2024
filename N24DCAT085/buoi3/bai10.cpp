#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char a;
    cin >>a; 
    if (islower(a)) {cout<<toupper(a);}
else { a=tolower(a);  cout<<a; }
}