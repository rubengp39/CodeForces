#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll n, rev = 0, rest;
	cin >> n;
	while(n !=0)
	{
		rest = n%10;
		rev = rev*10 + rest;
		n = n/10;
	}

	cout << rev << '\n';
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}