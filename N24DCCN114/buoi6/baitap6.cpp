#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout <<"nhap so luong phan tu cua mang ";
    cin >>n;
    vector<int>v(n);
    cout <<"nhap cac phan tu cua mang ";
    for (int i=0;i<n;i++)
    {
        cin >>v[i];
    } 
    for (int i=n-1;i>=0;i--)
    {
        if (v[i]%2!=0)
        {
            v.insert(v.begin()+i+1,13);
            break;
        }
    }
    for (int i=0;i<v.size();i++)
    {
        cout <<v[i]<<" ";
    }
}