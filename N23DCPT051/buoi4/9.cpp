#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c;
	cin>>a>>b>>c;
	if(a== 0)
	{
		if(b == 0)
		{ 
			if (c == 0)
				cout<<"pt vo so nghiem"; 
			else cout<<"pt vo nghiem"; 
		} 
		else 
		{
			double x = -c/b; 
			cout<<"pt co nghiem duy nhat la "<<x; 
		}
	} 
	double delta = b * b - 4 * a * c;
	if(delta < 0)
	{
		cout<<"pt vo nghiem";
	}  
	else if (delta == 0)
	{
		double x = -b/(2*a);
		cout<<"pt co nghiem kep"<<x;
	 } 
	else 
	{
	double x1 = (-b+sqrt(delta))/(2*a);
	double x2 = (-b-sqrt(delta))/(2*a);
	cout<<"pt co 2 nghiem phan biet: "<< x1<<" , "<< x2<<endl; 
	}
}
