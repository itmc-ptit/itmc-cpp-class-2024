#include <iostream>
using namespace std;
int main()
{
	int ngay;
	cin>>ngay;
	switch(ngay)
	{
		case 1:
		cout<<"Sunday"<<endl;
		break; 
		case 2: 
		cout<<"Monday"<<endl;
		break; 
		case 3: 
		cout<<"Tuesday"<<endl;
		break;
		case 4: 
		cout<<"Wesnesday"<<endl;
		break;
		case 5: 
		cout<<"Thursday"<<endl;
		break;
		case 6: 
		cout<<"Friday"<<endl;
		break;
		case 7: 
		cout<<"Saturday"<<endl;
		break;
		default:
		cout<<"so ko hop le"<<endl;
	break;
	}

	return 0;  
}

