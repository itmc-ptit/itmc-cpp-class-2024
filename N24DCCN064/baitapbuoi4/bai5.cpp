#include<iostream>
using namespace std;
int main()
{
    float a, b;
    cin >> a >> b;
    a=max(a,b);
    cin >> b;
    a=max(a,b);
    cin >> b;
    a=max(a,b);
    cout << a;
}