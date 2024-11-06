#include <iostream>
using namespace std;

int main(){
    char a;
    cin >> a;
    if(islower(a)) a = toupper(a);
    else a = tolower(a);
    cout << a;
    return 0;
}