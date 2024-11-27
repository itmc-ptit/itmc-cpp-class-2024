#include<iostream>
using namespace std;

bool containsChar(string str, char c) 
{
    for(int i=0; i<str.size(); i++)
    {
        if(c==(char)str[i])
        {
            return true;
        }
        else{
            if(i==str.size()-1)
            {
                return false;
            }
        }
    }
}

int main()
{
    cout << containsChar("hello", 'o');
}