#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, m, res; cin >> n >> m;

	res = min(2,n-1)*m;
	cout << res << '\n';
}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}