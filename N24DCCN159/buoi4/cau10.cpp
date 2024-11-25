#include <iostream>
using namespace std;
int main()
{
char a;
cout<<"nhap ngay thu: "<<a;cin>>a;
switch(a)
{
case '2':
cout<<"monday";
break;
case '3':
cout<<"tuesday";
break;
case '4':
cout<<"wednesday";
case '5':
cout<<"thursday";
break;
case '6':
cout<<"friday";
break;
case '7':
cout<<"saturday";
break;
case '8':
cout<<"sunday";
break;
}

return(0);
}