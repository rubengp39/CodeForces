#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, m, count = 0; cin >> n >> m;

	while(n--)
	{
		count++;
		if (count % m == 0)
		{
			n++;
		}
	}
	cout << count;
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}