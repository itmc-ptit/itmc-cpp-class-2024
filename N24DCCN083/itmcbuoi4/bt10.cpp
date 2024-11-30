#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	switch(a){
		case 1:
			cout<<"Sunday";
			break;
		case 2:
			cout<<"Monday";
			break;
		case 3:
			cout<<"Tuesday";
			break;
		case 4:
			cout<<"Wednesday";
			break;
		case 5:
			cout<<"Thurday";
			break;
		case 6:
			cout<<"Friday";
			break;
		case 7:
			cout<<"Saturday";
			break;
		default:
			cout<<"khong ton tai";
			break;
	}
	return 0;
}
