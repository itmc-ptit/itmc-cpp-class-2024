//cthuc khoang cach: can((x2-x1)2 +(y2-y1)2)
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x1,x2,y1,y2;
	cout<<"Nhap toa do diem thu 1 (x1,y1): ";
	cin>>x1>>y1;
	cout<<"Nhap toa do diem thu 2 (x2,y2): ";
	cin>>x2>>y2;
	double kc = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	cout<<"Khoang cach giua 2 diem: "<<kc<<endl;
	return 0;
}
