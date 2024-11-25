#include <iostream>
using namespace std;
int main()
{
    int guessNumber = 24;
    int n;
    while (true)
    {
        cout << "Guess Number: ";
        cin >> n;
        if (n > guessNumber)
        {
            cout << "Smaller than that" << endl;
        }
        else if (n < guessNumber)
        {
            cout << "Bigger than that" << endl;
        }
        else
        {
            cout << "Great!" << endl;
            break;
        }
    }

    return 0;
}