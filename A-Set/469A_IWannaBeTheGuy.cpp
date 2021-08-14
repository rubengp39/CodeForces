#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	vector<int> str, a , b;
	int x, y, z, n;
	bool isEq = true;
	cin >> x;
	for (int i = 1; i <= x; ++i)
	{
		str.pb(i);
	}
	cin >> y;
	for (int i = 0; i < y; ++i)
	{
		cin >> n;
		a.pb(n);
	}
	cin >> z;
	for (int i = 0; i < z; ++i)
	{
		cin >> n;
		b.pb(n);
	}

	a.insert(a.end(), b.begin(), b.end());
	sort(a.begin(),a.end());
	a.erase( unique( a.begin(), a.end() ), a.end() );

	if (a.size() == str.size())
	{
		for (int i = 0; i < a.size(); ++i)
	{
		if (str[i] != a[i])
		{
			isEq = false;
			break;
		}
	}
	} else {
		isEq = false;
	}
	
	if (isEq)
	{
		cout << "I become the guy.";
	} else {
		cout << "Oh, my keyboard!";
	}
	return 0;
}