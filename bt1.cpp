#include <iostream>
using namespace std;
main(){
	int n;cin>>n;
	int a[n];
	int sum=0;
	int tich=1;
	for (int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
		tich*=a[i];
	}
	cout<<"tong cua mang la:"<<sum;
	cout<<"tich cua mang la:"<<tich;
	cout<<"trung binh cong la:"<<float(sum)/n;
	return 0;
}
