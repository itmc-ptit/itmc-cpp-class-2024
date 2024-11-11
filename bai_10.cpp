#include <iostream>

using namespace std;
int main(){
    int a;
    cout << "Please enter 1 number between 1 and 7" <<  endl;
    cin >> a;
    if (1 <= a) && ( a<= 7);
    switch (a)
    {
    case 1:
        cout<<"Sunday";
        break;
    case 2:
        cout<<"Monday";
        break;
    case 3:
        cout<<"Tuesday";
        break;
    case 4:
        cout<<"Wednesday";
        break;
    case 5:
        cout<<"Thursday";
        break;
    case 6:
        cout<<"Friday";
        break;
    case 7:
        cout<<"Saturday";
        break;
    default:
        cout << "So nhap khong hop le";
        break;
    }
    return 0;
}
