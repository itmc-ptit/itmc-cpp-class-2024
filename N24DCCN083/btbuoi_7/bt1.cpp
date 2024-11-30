#include<iostream>
using namespace std;
int findMin(int a[],int size){
	int min=a[0];
	for (int i=1;i<size;i++){
		if (a[i]<min){
			min =a[i];
		}
	}
	return min;
}
int main(){
	int size;cin>>size;
	int a[size];
	for (int i=0;i<size;i++){
	cin>>a[i];
    }
	cout<<findMin(a,size);
	return 0;
}
