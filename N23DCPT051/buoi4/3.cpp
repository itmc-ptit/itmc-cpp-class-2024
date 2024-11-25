//so chinh phuong bang binh phuong cua 1 so nguyen. Can bac hai cua so chinh phuong co gia tri la mo so tu nhien, tuc so nguyen duong 
//VD: so 10 ko la so chinh phuong vi can bac hai cua 10 bang  3.16227766017

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n; cin>>n;
	if(n<0)
	{
		cout<<"khong phai so chinh phuong"; 
	}
	else  
	{
		int sprt = static_cast<int>(sqrt(n)); 
		if(pow(sprt,2)== n)
		cout<<n<<" la so chinh phuong"<<endl; 
		else  
		cout<<n<<" ko la so chinh phuong"<<endl; 
	}
	return 0; 
}
 
//neu sprt cua n bang 1 so nguyen thi n la so cp 
//int sprt(n); 
//		if(	sqrt(n)>0) 
//		{
//			cout<<"n la so cp";
// 
//		}
//		else cout<<"ko"; 
