//tim ptu xh nhieu nhat
#include <iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int tanso=0,so=a[0];
	for (int i = 0; i < n; i++) {
		int dem=1;
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
                dem++;
            }
        }
        if (dem>tanso){
        	tanso=dem;
        	so=a[i];
		}
	}
	cout<<"ptu co so lan xh nhieu nhat:"<<so;
	cout<<"so lan xh:"<<tanso;
	return 0;
}
		 	
	
	
	
