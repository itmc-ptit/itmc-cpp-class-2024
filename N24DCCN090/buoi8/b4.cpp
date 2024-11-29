#include<iostream>
using namespace std;
void chuyen(string s)
{
    for(int i=0;i<s.size();i++)
    {
        cout<<(char)tolower(s[i]);
    }
}
int main()
{
    cout<<"nhap chuoi: ";
    string s;
    cin>>s;
    cout<<"chuoi da chuyen doi la : ";
    chuyen(s);
}