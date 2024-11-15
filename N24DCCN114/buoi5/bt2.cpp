#include <iostream>
using namespace std;
int main()
{
    int a,tich=1;
    cout <<"ban muon in ban cuu chuong may ";
    cin >>a;
    for (int i=1;i<=10;i++)
    {
        tich=a*i;
        cout <<a<<"x"<<i<<"="<<tich<<endl;
    }
}