#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int k, count = 0; cin >> k;
	for (ll i = 1; i <= k;i = i*10+1)
	{
		for (int j = 1; j <= 9; ++j)
		{
			if (i*j <= k)
			{
				count++;
			}
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