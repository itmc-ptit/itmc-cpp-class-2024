#include<iostream>
using namespace std;
int countWords(string str)
{
    int n=str.size();
    int dem1=0;
    int dem2=0;
    for(int i=0; i<n-1; i++)
    {
        if((str[i]==' ' && str[i]!=str[i+1]) || (str[i+1]==' ' && str[i]!=str[i+1]))
        {
            dem1++;
        }

    }
    if(str[0]!=' ')
    {
        dem1++;
    }
    if(dem1%2==0)
    {
        dem1=dem1/2;
    }
    else
    {
        dem1=(dem1+1)/2;
    }
    return dem1;

}
int main()
{
    cout << countWords(" xin   chao tat ca moi nguoi   ");
}