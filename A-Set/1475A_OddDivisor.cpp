#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll n; cin >> n;
	if (n&(n-1))
	{
		cout << "YES" << '\n';
	} else
	{
		cout << "NO" << '\n';
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