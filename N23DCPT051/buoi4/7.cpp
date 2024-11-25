#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cin>>a>>b;
	if(a == 0)
	{
		
		if(b == 0)
		{
			cout<<"pt vo so nghiem"; 
		}
		else cout<<"phuong trinh vo nghiem";	
	} 
	else 
	{
		double x = -b/a;
		cout<<"pt co nghiem duy nhat la "<< x<< endl; 
	}
	return 0; 
}
