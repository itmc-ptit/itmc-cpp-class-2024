#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (a+b<=c||a+c<=b||b+c<=a){cout<<"khong la tam giac";}
	else if ((a==b)||(a==c)||(b==c)){cout<<"tam giac can";}
	else if ((sqrt(a*a+b*b)==c)||(sqrt(a*a+c*c)==b)||(sqrt(b*b+c*c)==a)){cout<<"tam giac vuong";}
	else if (a==b&&a==c){cout<<"tam giac deu";}
	else {
	cout<<"tam giac thuong";}
	return 0;
}
	

