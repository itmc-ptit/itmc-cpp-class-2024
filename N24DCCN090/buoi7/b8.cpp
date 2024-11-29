#include <iostream>
using namespace std;
bool isPalindrome(string n)
{
    int left=0; 
    int right=n.size()-1; 
    while(left<=right){
        if(n[left]!=n[right]) return false;
        else {
            left++; 
            right--;
        }
    }
    return true;
}
int main ()
{
    cout<<"nhap so : ";
    string s;
    cin>>s;
    if (isPalindrome(s))
    {
        cout<<"so doi xung";
    }else cout<<"no doi xung";

}