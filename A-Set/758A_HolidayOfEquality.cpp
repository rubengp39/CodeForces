#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k, sum = 0; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}
	sort(v.begin(), v.end());
	int max = v[n-1];
	for (int i = n-1; i >= 0; --i)
	{
		sum += max - v[i];
	}
	cout << sum;
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--))
	*/
		solve();


return 0;
}