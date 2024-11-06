#include <iostream>
using namespace std;
  int main()
  {
    int a=144, b=8786;
    a+=b;
    b=a-b;
    a-=b;
    cout <<a<<" "<<b;
    return 0;
  }