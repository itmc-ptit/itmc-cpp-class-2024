#include <iostream>
using namespace std;
int sumOddNumber(int a[],int size){
	int tong=0;
	for (int i=0;i<size;i++){
		if (a[i]%2!=0) {
			tong=tong +a[i];
		}
	}
	return tong;
}
int main(){
int size;cin>>size;
int a[size];
for (int i=0;i<size;i++){
	cin>>a[size];
}
	cout<<"tong cac so le la: "<<sumOddNumber(a,size);
	return 0;
}
