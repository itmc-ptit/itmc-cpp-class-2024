#include <iostream>
using namespace std;
int main(){
	int n,d,max,m,s;
	cout<<"Nhap so luong phan tu mang: ";
	cin>>n;
	int a[n];
	cout<<"nhap phan tu mang: ";
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int Dem[n];
	for(int i=0; i<n; i++){
		d = 0;		
		for(int j=0; j<n; j++){
			if(a[i]==a[j]){
				d += 1; 
			}
		}
		Dem[i] = d;
	}
	max = Dem[0];
	for(int i=0; i<n -1; i++){
		if(max < Dem[i]){
			max = Dem[i];
		}
	}
	for(int i=0; i<n; i++){
		m= 0;		
		for(int j=0; j<n; j++){
			if(a[i]==a[j]){
				m += 1;
			}
		}
		if(m == max){
			s = a[i];
		}
	}
	cout<<"So xuat hien nhieu nhat : "<<s<<endl;
	cout<<"so la xuat hien:"<<max<<" lan";
	return 0;
}