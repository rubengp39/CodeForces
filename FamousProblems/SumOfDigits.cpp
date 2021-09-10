#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll n, sum = 0, m;
	cin >> n;
	while(n > 0)
	{
		m = n%10;
		sum +=m;
		n = n/10;
	}

	cout << sum << '\n';
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}