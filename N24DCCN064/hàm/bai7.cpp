#include<iostream>
#include<string>
using namespace std;
string removeDuplicates(string str)  
{
    int n=str.size();
    for(int i=0; i<str.size(); i++)
    {
        for(int j=0; j<str.size(); j++)
        {
            if(str[i]==str[j] && i!=j)
            {
                str.erase(j, 1);
            }
        }
    }
    return str;
}

int main()
{
    cout << removeDuplicates("abbbacccdcaca");
}