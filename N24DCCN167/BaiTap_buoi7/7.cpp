#include <iostream>
using namespace std;
string removeDuplicates(string str)
{
    // solution 1

    // int i = 0;
    // while (i < str.length()) {
    //     int k = i + 1;
    //     while (k < str.length()) {
    //         if (str[i] == str[k]) {
    //             str.erase(k,1);
    //             k = i;
    //         }
    //         k++;
    //     }
    //     i++;
    // }
    // return str;

    //solution 2
    string StrHasSpaces,newStr;
    for (int i = 0;i < str.length();i++) {
        StrHasSpaces += str[i];
        for (int j = 0;j < str.length();j++) {
            if (i != j && str[i] == str[j]) {
                str[j] = ' ';
            }
        }
    }
    for (int item : StrHasSpaces) {
        if (item != ' ') newStr += item;
    }
    return newStr;
}
int main()
{
   cout << removeDuplicates("aaaabbacddddd");
    return 0;
}