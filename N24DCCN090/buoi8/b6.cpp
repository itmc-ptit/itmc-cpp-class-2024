#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"nhap chuoi can tach chu : ";
    getline(cin,s);
    cout<<" cac chu la : \n";
    int d=1;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]!=' ')
        {
            cout<<s[i];
            d=1;
            continue;
        }
        if(d==1)
        {
            d++;
            cout<<endl;
            continue;
        }
    }
}