#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(const string &str) {
    stringstream ss(str);
    string word;
    int wordCount = 0;

    while (ss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    string k;
cout << "nhap chuoi: ";
cin >> k;
    int wordCount = countWords(k);

    cout << "So tu trong chuoi: " << wordCount << endl;

    return 0;
}
