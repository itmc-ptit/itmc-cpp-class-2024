#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cin >> str;
    char c;
    int thu=0;
    cin >> c;
    for(int i=0; i<str.size(); i++)
    {
        if((int)c==(int)str[i])
        {
            thu++;
        }
    }
    if(thu==0)
    {
        cout << "NOT FOUND";
    }
    else{
        cout <<"FOUND";
    }
}