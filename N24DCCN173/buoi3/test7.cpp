#include <bits/stdc++.h>
using namespace std;

int main()
{
	char s; cin >> s;
	if(s >= 'a' && s <= 'z')
	{
		s -= 32;
		cout << s;
	}
	else if(s >= 'A' && s <= 'Z')
	{
		s += 32;
		cout << s;
	}
	else return 0;
}                                                                     
