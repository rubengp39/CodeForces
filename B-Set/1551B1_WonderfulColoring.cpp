#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	string str; cin >> str;
	int c, c1 = 0, c2 = 0;
	sort(str.begin(), str.end());
	
	while(str.size() > 0)
	{
		char ch = str[0];
		c = count(str.begin(), str.end(), ch);
		if (c == 1)
		{
			c1++;
		} else if (c > 0)
		{
			c2++;
		}
		str.erase(remove(str.begin(), str.end(), ch), str.end());
	}
	

	cout <<c1 / 2 + c2  << '\n';
}

int main()
{	
	int t;
	cin >> t;
	while(t--)
		solve();


return 0;
}