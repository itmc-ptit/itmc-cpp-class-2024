#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	if (a%4==0&& a%10!=0){
		cout<<a<<" la nam nhuan";
}else{
	cout<<a<<" khong la nam nhuan";
}
return 0;
	}