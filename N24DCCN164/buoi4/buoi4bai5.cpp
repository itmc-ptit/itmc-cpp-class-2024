#include <iostream>
using namespace std;
int main() {
    int x, max;
    cout<<"so thu nhat:";
    cin>>max;
    cout<<"so thu hai:";
    cin>>x;
    if(x>max){
        max=x;
    }
    cout<<"so thu ba:";
    cin>>x;
    if(x>max){
        max=x;
    }
    cout<<"so thu tu:";
    cin>>x;
    if(x>max){
        max=x;
    }
    cout<<"so lon nhat la:"<<" "<<max;
}