#include <iostream>
using namespace std;
int main()
{
	int n; cin>>n;
	if((n%4 ==0 && n%100 != 0) || (n %400 == 0)) 
	cout<<n<<" la nam nhuan"<<endl;
	else cout<< n <<" ko la nam nhuan"<<endl;
	return 0; 
} 
