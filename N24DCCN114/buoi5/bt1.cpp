#include <iostream>
using namespace std;
int main()
{
    int a,chan=0,le=0;
    cout <<"nhap vao 1 so ";
    cin >>a;
    while (a>0)
    {
        if (a%2==0){
            chan++;
        }
        else{
            le++;
        }
        cout <<"nhap them 1 so ";
        cin >>a;
    }
    cout <<"co "<<chan<<" so chan duoc nhap "<<endl;
    cout <<"co "<<le<<" so le duoc nhap ";


}