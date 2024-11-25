using namespace std;
#include <iostream>
int main(){
    int n;
    cout << "nhap so bat ki: ";
    cin >> n;
    int x=0;
    if (n<=1 || n==4){
        cout<<n<<" ko la so ngto";
    }
    if ( n==2){
        cout<<n<<" la so ngto";
    }
    if(n>4){
    for (int i = 3;i<=n;i++){
        if (n%i==0){
        x+=1;
        }
    }
    if (x>1){
        cout<<n<<" ko la so ngto";
    }
    else{
        cout<<n<<" la so ngto";
    }}
}