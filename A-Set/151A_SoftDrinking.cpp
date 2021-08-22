#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	l = k*l / nl;
	c = c*d;
	p = p/np;

	cout << min({l,c,p}) / n ;

}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}