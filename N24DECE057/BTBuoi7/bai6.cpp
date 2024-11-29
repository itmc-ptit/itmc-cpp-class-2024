#include <bits/stdc++.h>
using namespace std;
int countWords(string str) {
    int dem=0;
    stringstream s(str);
    string word;
    while (s>>word) dem++;
    return dem;
}
int main() {

    cout<<countWords("Cau lac bo ITMC");

    return 0;
}