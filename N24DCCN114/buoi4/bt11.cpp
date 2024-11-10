#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"nhap vao mot so <100 ";
    cin >>n;
    if (n<10)
    {
        switch (n)
        {
        case 1:
            cout <<"mot";
        break;
        case 2:
            cout <<"hai";
        break;
        case 3:
            cout <<"ba";
        break;
        case 4:
            cout <<"bon";
        break;
        case 5:
            cout <<"nam";
        break;
        case 6:
            cout <<"sau";
        break;
        case 7:
            cout <<"bay";
        break;
        case 8:
            cout <<"tam";
        break;
        default:
            cout <<"chin";
        break;
        }
    }
    else 
    if (n<100)
    {
        switch (n/10)
        {
        case 1:
            cout <<"muoi ";
        break;
        case 2:
            cout <<"hai muoi ";
        break;
        case 3:
            cout <<"ba muoi ";
        break;
        case 4:
            cout <<"bon muoi ";
        break;
        case 5:
            cout <<"nam muoi ";
        break;
        case 6:
            cout <<"sau muoi ";
        break;
        case 7:
            cout <<"bay muoi ";
        break;
        case 8:
            cout <<"tam muoi ";
        break;
        default:
            cout <<"chin muoi ";
        break;
        }
        switch(n%10)
        {
        case 0:
        break;
        case 1:
        cout <<"mot";
        break;
        case 2:
            cout <<"hai";
        break;
        case 3:
            cout <<"ba";
        break;
        case 4:
            cout <<"bon";
        break;
        case 5:
            cout <<"nam";
        break;
        case 6:
            cout <<"sau";
        break;
        case 7:
            cout <<"bay";
        break;
        case 8:
            cout <<"tam";
        break;
        default:
            cout <<"chin";
        break; 
        }
    }
    else 
    cout <<"vui long nhap lai so <100";
}