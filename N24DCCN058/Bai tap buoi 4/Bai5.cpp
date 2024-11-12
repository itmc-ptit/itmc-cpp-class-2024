#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int a , b ;
    cin >> a >> b ;
    a = max(a,b);
    cin >> b ;
    a =  max(a,b);
    cin >> b ;
    a = max(a,b);
    cout << a ; 
    return 0;
}
// Cach khac 
//#include <iostream>
//#include <cmath> 
//using namespace std;
//int main() {
//    int a , b ;
//    cin >> a ; 
//   for (int i = 0 ; i < 3 ; i++){
//        cin >> b ; 
//        a = max(a,b) ;
//   }
//   cout << a ; 
//   return 0;
//}