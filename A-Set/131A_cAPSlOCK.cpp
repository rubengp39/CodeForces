#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	string str;
	cin >> str;
	bool isL = false;

	for (int i = 1; i < str.size(); ++i)
	{
		if (islower(str[i]))
		{
			isL = true;
			break;
		}
	}

	if (isL)
	{
		cout << str;
	} else if (isupper(str[0]))
	{
		for_each(str.begin(), str.end(), [](char & c) {
        c = ::tolower(c);
    });
		cout << str;
	} else {
		for_each(str.begin(), str.end(), [](char & c) {
        c = ::tolower(c);
    });
		str[0] = toupper(str[0]);
		cout << str;
	
	}
	


return 0;
}