#include <iostream>
using namespace std;
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a)
	{
		if( a == b && b==c)
		{
			cout<<"la tam giac deu"<<endl; 
		}
		else if(a==b || b==c || c==a)
		{
			cout<<"la tam giac can"<<endl; 
		}
		else if(a*a == b*b +c*c || b*b == a*a + c*c|| c*c == a*a + b*b)
		{
		cout<<"la tam giac vuong"<<endl; 
		}
		else cout<<" la tam giac thuong"<<endl; 
	} 
	else cout<<"ko la tam giac"<<endl;
	return 0; 
}
