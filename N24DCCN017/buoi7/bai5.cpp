#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
void printprimeinrange(int start,int end){
    vector<bool> v(end+1,true);
    v[0]=v[1]=false;
    for(int i=2;i<int(sqrt(end));i++){
        if(v[i]){
            for(int j=i*i;j<=(end);j+=i){
                v[j]=false;
            }
        }
    }
    for(int i=start+2;i<end;i++){
        if(v[i]==true && i>start){
            cout<<i<<" ";
        }
    }

}
int main(){
    printprimeinrange(5,100);
}