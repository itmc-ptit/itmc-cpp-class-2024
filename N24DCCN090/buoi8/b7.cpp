#include <iostream>
using namespace std; 


int main()
{
    string s;
    int i=0;
    getline(cin,s);
    
    while(s[0]==' ')
    {
        s.erase(0,1);
    }
    
    while (i<s.size())
    {
        if (s[i]==' '&&s[i+1]==' ')
        {
                while(s[i+1]==' '&& (i+1)<s.size())
                {
                    s.erase(i+1,1);
                }
        }
        
        i++;
    }
    cout<<"chuoi sau khi xoa la : "<<s;
}