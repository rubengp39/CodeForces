#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll a, b, count = 0;
	cin >> a >> b;
	if (a > b)
	{
		count = (a - b) / 10;
		if ((a-b) % 10)
		{
			count++;
		}

	} else if (a < b)
	{
		count = (b - a) / 10;
		if ((b-a) % 10)
		{
			count++;
		}
	}
	cout << count << '\n';
}

int main()
{	
	int t;
	cin >> t;
	while(t--)
		solve();
return 0;
}