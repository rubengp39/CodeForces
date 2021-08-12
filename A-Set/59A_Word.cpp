#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int u = 0;
	string a;
	cin >> a;

	for (int i = 0; i < a.size(); ++i)
	{
		if(isupper(a[i]))
		{
			u++;
		}
	}
	if (u > a.size()/2)
	{
		for_each(a.begin(), a.end(), [](char & c) {
        c = ::toupper(c);
    });
	} else {
		for_each(a.begin(), a.end(), [](char & c) {
        c = ::tolower(c);
    });
	}
	cout << a;
	return 0;
}