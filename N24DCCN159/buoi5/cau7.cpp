#include <iostream>
using namespace std;
int main()
{
int a;    
cin>>a;
while (true)
{
if (a>24){cout<<"lon hon so can doan"<<endl;cin>>a;}else
if (a<24){cout<<"nho hon so can doan"<<endl;cin>>a;}else
{cout<<"da doan dung";break;}
}
return(0);
}