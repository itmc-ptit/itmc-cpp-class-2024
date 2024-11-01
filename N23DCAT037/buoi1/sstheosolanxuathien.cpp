#include <iostream>
using namespace std;
#include <map>
#include <vector>

map <int, int> a;
int main(){
    a[2] = 2;
    a[1] = 1;
    a[0] = 0;
    for (pair <int, int> i:a){
        cout<<i.first<<endl;
    }
    return 0;
}