
#include<iostream>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
} 

bool KTSNT(int x)
{
	int dem=0;
	for(int i=1; i<=x; i++)
		if (x % i == 0)
			dem++;
	if (dem==2)
		return true;
	return false;
}

void XuatPTSNT(int a[], int n)
{
	cout<<"So nguyen to la: \n";
	for(int i=0; i<n; i++)
		if(KTSNT(a[i])==true)
			cout<< a[i] <<"\t";
}
int main()
{
	int n, a[MAX];
	cout<<"So luong phan tu : "; cin>>n;
	NhapMang(a,n);
	XuatPTSNT(a,n);
	cout<<endl;
    return 0;
}