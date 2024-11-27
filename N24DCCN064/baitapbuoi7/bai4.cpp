#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    string a;
    int ascii=0;
    cin >> str;
    for(int i=0; i<str.size(); i++)
    {
        ascii=(int)str[i];
        if(ascii>=97 && ascii<=122) //32
        {
            ascii=ascii-32;
            a=(char)ascii;
            str.replace(i, 1, a);
            a.erase();
        }
        ascii=0;
    }
    cout << str;
}