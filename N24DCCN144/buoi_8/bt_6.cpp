#include <iostream>
#include <vector>

using namespace std;

vector<string> tachChuoiThanhVector(string s)
{
    bool tangPhantu = true;
    vector<string> vec_Str;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == char(32))
        {
            tangPhantu = true;
        }
        else
        {
            string newStr(1, s[i]);

            if (tangPhantu == true)
            {
                vec_Str.push_back(newStr);

                tangPhantu = false;
            }
            else
            {
                vec_Str[vec_Str.size() - 1] += newStr;
            }
        }
    }

    return vec_Str;
}

void inVector(vector<string> vec)
{
    cout << "[";

    for (int i = 0; i < vec.size(); i++)
    {
        cout << "\"" << vec[i] << "\"";
        if (i != vec.size() - 1)
        {
            cout << ",";
        }
    }

    cout << "]";
}

int main()
{
    string a;
    cout << "nhap vao mot chuoi: ";
    getline(cin, a);

    inVector(tachChuoiThanhVector(a));
}