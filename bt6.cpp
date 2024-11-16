//chen so 13 vao ptu le cuoi
#include <iostream>
using namespace std;
int main(){
	int n;cin>>n;
	int a[n+1];
		for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bool lecuoi=false;
	int tim;
	for (int i =n-1;i>=0;i--) {
		if(a[i]%2!=0){
		    for (int j = n; j > i + 1; j--) {
                a[j] = a[j - 1];
            }
	        a[i + 1] = 13;
	        n++;
			lecuoi=true;
			break;
		}
	}
	if(lecuoi){
		cout << "mang moi la: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }	
    }
    else {
    	 cout << "khong co so le nao";
	}
 return 0;
}
    
		
	
	
