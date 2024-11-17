#include <iostream>
using namespace std;
int main()
{
int a;
int i=0;
cin>> a;
while (a>0) 
{
cin>>a;
if (a%2==0) {i=i+1;}
}
cout<<i;
return(0);
}