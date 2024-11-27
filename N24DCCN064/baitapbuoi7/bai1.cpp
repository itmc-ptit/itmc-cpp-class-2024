#include<iostream>  // 0 1 2 3 4 5 6
#include<string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string dem1;
    string dem2;
    int a=0;
    int b=str.size()-1;
    for(int i=1; i<=str.size()/2; i++)   
    {
        dem1=str[a]; // dau
        dem2=str[b]; //cuoi
        str.erase(a, 1);
        str.erase(b-1, 1);
        str.insert(a, dem2);
        str.insert(b, dem1);
        a++;
        b--;
        dem1.erase();
        dem2.erase();
    }
    cout << str;
}