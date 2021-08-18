#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll k; cin >> k;
	int n, m;
	for (int i = 0; i < INFINITE; ++i)
	{
		if (i*i >= k)
		{
			n =i;
			break;
		}
	}
	k -=(n-1) * (n-1);

	if (k <= n)
	{
		cout << k << " " << n << '\n';
	} else 
	{
		k -= n;
		cout << n << " " << n-k << '\n';
	}



}

int main()
{	
	int t;
	cin >> t;
	while(t--)
		solve();


return 0;
}