#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str = "Cau   lac  bo  ITMC";
    // string newStr = "";
    // vector<string> res;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] != ' ')
    //     {
    //         newStr += str[i];
    //     }
    //     else
    //     {
    //         if (newStr != "")
    //         {
    //             res.push_back(newStr);
    //             newStr = "";
    //         }
    //     }
    // }
    // if (str[str.length() - 1] != ' ')
    //     res.push_back(newStr);
    // cout << "[";
    // for (int i = 0; i < res.size(); i++)
    // {
    //     if (i == res.size() - 1)
    //     {
    //         cout << '"' << res[i] << '"';
    //         break;
    //     }
    //     cout << '"' << res[i] << '"' << ",";
    // }
    // cout << "]";
    
    cout << "[";
    bool isMoreItem = false;
    int start_word = -1;
    for (int i = 0; i < str.length(); i++){
        if (str[i] == ' ' || i == str.length() - 1){
            int bonus = 0;
            if (i == str.length() - 1)
                bonus = 1;
            if (start_word > -1){
                if (isMoreItem)
                    cout << ",";
                cout << "\"" << str.substr(start_word, i - start_word + bonus) << "\"";
                start_word = -1;
                isMoreItem = true;
            }
        }
        else {
            if (start_word == -1)
                start_word = i;
        }
    }    
    cout << "]";
    return 0;
}
