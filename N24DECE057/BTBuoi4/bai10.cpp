#include <iostream>
using namespace std;
int main() {
    int ngay;cin>>ngay;
    if (ngay==1) cout<<"SUNDAY"; else 
     if (ngay==2) cout<<"MONDAY"; else 
      if (ngay==3) cout<<"TUESDAY"; else 
       if (ngay==4) cout<<"WEDNESDAY"; else 
        if (ngay==5) cout<<"THURSDAY"; else 
         if (ngay==6) cout<<"FRIDAY"; else 
          if (ngay==7) cout<<"SATURDAY"; else cout<<"INVALID";
    return 0;
}

