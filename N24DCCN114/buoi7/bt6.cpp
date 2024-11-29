#include <iostream>
#include <string>
using namespace std;
int countWords(string str){
    int dem=1;
    for (int i=0;i<sizeof(str);i++){
        if (str[i]!=' '&&str[i+1]==' '){
            dem++;
        }
    }
    return dem;
}
int main(){
    string A="“Cau   lac  bo ITMC";
    cout <<countWords(A);
}