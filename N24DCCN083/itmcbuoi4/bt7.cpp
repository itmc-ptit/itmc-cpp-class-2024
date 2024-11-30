#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b;
	double x;
	cin>>a>>b;
	if (a==0){
		if (b == 0) {
            cout << "Phuong trinh vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } else {
        x = (double)-b/a;
        cout << "Phuong trinh co nghiem la: " << x << endl;
    }
    return 0;
}

	
