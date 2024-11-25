#include <iostream>
#include <math.h>
using namespace std;
int main()
{
int a;cout<<"nhap so: ";cin>>a;
int b=a/10; int c=a%10;
cout<<"cach doc la: ";
if (a==5) {cout<<"nam";} else
{
if (b==1) {cout<<"muoi";} else
if (b==2) {cout<<"hai muoi";} else
if (b==3) {cout<<"ba muoi";} else
if (b==4) {cout<<"bon muoi";} else
if (b==5) {cout<<"nam muoi";} else
if (b==6) {cout<<"sau muoi";} else
if (b==7) {cout<<"bay muoi";} else
if (b==8) {cout<<"tam muoi";} else
if (b==9) {cout<<"chin muoi";} 
cout<<" ";
if (c==1) {cout<<"mot";} else
if (c==2) {cout<<"hai";} else
if (c==3) {cout<<"ba";} else
if (c==4) {cout<<"bon";} else
if (c==5) {cout<<"lam";} else
if (c==6) {cout<<"sau";} else
if (c==7) {cout<<"bay";} else
if (c==8) {cout<<"tam";} else
if (c==9) {cout<<"chin";}
}
return(0);
}