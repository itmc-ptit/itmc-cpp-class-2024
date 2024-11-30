#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int x1,x2,y1,y2;
	cout<<"nhap toa do diem 1: ";cin>>x1>>y1;
	cout<<"nhap toa do diem 2: ";cin>>x2>>y2;
	cout<<"khoang cach 2 diem la: "<<sqrt(pow(x1-x2),2)+pow((y1-y2),2));
return 0;
}
