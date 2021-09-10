#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll n1 = 1, n2 = 1, n3, n;
	cin >> n;
	cout << n1 << ' ' << n2 << ' ';

	for (int i = 2; i < n; ++i)
	{
		n3 = n1 + n2;
		cout << n3 << ' ';
		n1 = n2;
		n2 = n3;
	}
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}