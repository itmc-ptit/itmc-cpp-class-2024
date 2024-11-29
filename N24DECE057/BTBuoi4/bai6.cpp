#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int nam;cin>>nam;
  if (nam<=0) cout<<"INVALID";
   else 
	if ((nam%400==0) || ((nam%4==0) && (nam%100!=0)))
	 cout<<"YES"; else cout <<"NO";
	return 0;
}