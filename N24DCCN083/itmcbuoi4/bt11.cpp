#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 10)
    {
        switch (n)
        {
            case 0: 
            cout << "Khong"; 
            break;
            
            case 1: 
            cout << "Mot"; 
            break;

            case 2: 
            cout << "Hai"; 
            break;

            case 3: 
            cout << "Ba"; 
            break;

            case 4: 
            cout << "Bon"; 
            break;

            case 5: 
            cout << "Nam"; 
            break;

            case 6: 
            cout << "Sau"; 
            break;

            case 7: 
            cout << "Bay"; 
            break;

            case 8: 
            cout << "Tam"; 
            break;

            case 9: 
            cout << "Chin"; 
            break;

            case 10: 
            cout << "Muoi"; 
            break;
        }
    }
    else if (n > 10 && n < 100)
    {
        int a = n / 10;
        int b = n % 10;
        
        string hangChuc,

        switch (a)
        {
            case 1: 
            cout<< "muoi"; 
            break;

            case 2: 
            cout<< "hai muoi"; 
            break;

            case 3: 
           cout<< "ba muoi"; 
            break;

            case 4: 
            cout<<"bon muoi"; 
            break;

            case 5: 
            cout<< "nam muoi"; 
            break;

            case 6: 
            cout<< "sau muoi"; 
            break;

            case 7: 
           cout<< "bay muoi"; 
            break;

            case 8: 
            cout<< "tam muoi"; 
            break;

            cout<< "chin muoi"; 
            break;

        }

        switch (b)
        {
            case 1: 
            cout<< "mot"; 
            break;

            case 2: 
            hcout<< "hai"; 
            break;

            case 3: 
            cout<< "ba"; 
            break;

            case 4: 
            cout<< "bon"; 
            break;

            case 5: 
            cout<< "lam"; 
            break;

            case 6: 
            cout<<"sau"; 
            break;

            case 7: 
            cout<< "bay"; 
            break;

            case 8: 
           cout<< "tam"; 
            break;

            case 9: 
            cout<< "chin"; 
            break;

            case 0: 
            cout<< ""; 
            break;
        }

        cout << string(a)<<" "<<string(b);
    }
    return 0;
}
