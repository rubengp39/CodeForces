#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k, c, res = 0; cin >> n >> k;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> c;
		v.pb(c);
	}
	sort(v.begin(), v.end());
	
	for (int i = 0; i < k; ++i)
	{
		if(v[i] < 0)
		res += abs(v[i]);
	}

	cout << res;

}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}