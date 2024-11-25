#include <iostream>
using namespace std;
int main()
{
	int num, max;
	cin>>num;
	max = num;
	for(int i = 1;i<4;++i)
	{
		cout<<"nhap so tiep theo: ";
		cin>>num;
		if(num > max)
		{
			max = num;
		}
	}cout<<"So lon nhat trong 4 so la: "<<max<<endl; 
	return 0;
} 
