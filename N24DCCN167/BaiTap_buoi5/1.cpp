#include <iostream>
using namespace std;
int main()
{
    int n;
    int even = 0, odd = 0;
    while (true)
    {
        cin >> n;
        if (n < 0)
            break;

        if (n % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Co " << even << " so chan" << endl;
    cout << "Co " << odd << " so le" << endl;
    return 0;
}