#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;cin>>n;
  map <int,string> mp;
  mp[1]="mot";mp[2]="hai";mp[3]="ba";mp[4]="bon";mp[5]="nam";
  mp[6]="sau";mp[7]="bay";mp[8]="tam";mp[9]="chin";mp[10]="muoi";
  if (n/10==0 || n==10) cout<<n<<"-"<<mp[n];
   else if (n%100<20) cout<<n<<"-"<<mp[10]<<" "<<mp[n%10];
    else if (n%10==0) cout<<n<<"-"<<mp[n/10]<<" "<<mp[10];
     else cout<<n<<"-"<<mp[n/10]<<" "<<mp[10]<<" "<<mp[n%10];
  return 0; 
}