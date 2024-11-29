#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, max,tmp;
	cin>>a>>b>>c>>d;
	max = a;
	if(b>max)
 	max = b;
	if(c>max) 
	max = c;
	if(d>max) max = d;
	cout<<"So lon nhat la: "<<max<<endl;
	return 0;	
}
