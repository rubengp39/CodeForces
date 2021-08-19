#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k, m = INFINITE; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}

	for (int i = 0; i < n-1; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			if (abs(v[i]-v[j]) < m)
			{
				m = abs(v[i]-v[j]);
			}
		}
	}

	cout<< m << '\n';



}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}