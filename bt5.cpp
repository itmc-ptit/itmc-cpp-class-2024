//xoa so chan dau
#include <iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
bool chandau=false;
 for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
        	for (int j = i; j < n - 1; j++) {
                a[j] = a[j + 1];
            }
            n--;
            chandau=true;
            break;
        }
    }
if (chandau){
	cout<<"mang moi:";
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
}
else{
	cout<<"khong tim thay so chan nao";
}
return 0;
}
