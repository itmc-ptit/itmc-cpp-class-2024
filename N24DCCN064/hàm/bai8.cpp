#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(int n) 
{
    string str;
    str=to_string(n);
    int thu=1;
    int dem=str.size()-1;
    for(int i=0; i<=str.size()/2; i++)
    {
        if(str[i]==str[i+dem])
        {
            dem=dem-2;           
        }
        else{
            thu=0;
        }
    }
    if(thu==0)
    {
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    cout << isPalindrome(112211);
}