#include<iostream>   //   x i n   l o i 
                     // 0 1 2 3 4 5 6 7 8 9
#include<string>
using namespace std; 
int main()
{
    string str;
    getline(cin, str);
    int a[str.size()]={0};
    int dem=0;
    for(int i=0; i<str.size(); i++)
    {
        if(i==0 && (char)str[0]==' ' ||(i==0 && (char)str[0]==(char)str[1]))
        {
            a[i]=1;
        }
        else
        {
            if((char)str[i]==' ' && (char)str[i+1]==' ')
            {
                a[i]=1;
            }
        }
    }
    if(str[str.size()-1]==' ')
    {
        a[str.size()-1]=1;
    }
    for(int i=0; i<str.size(); i++)
    {
        if(a[i]==1)
        {
            str.erase(i-dem, 1);
            dem++;
        }
    }
    cout << str << "\n";
}