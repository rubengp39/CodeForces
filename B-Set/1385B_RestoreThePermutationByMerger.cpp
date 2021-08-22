#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k; cin >> n;
	vector<int> v, res;
	for (int i = 0; i < n*2; ++i)
	{
		cin >> k;
		v.emplace_back(k);
	}
	
	for (int i = 0; i < v.size()-1; ++i)
	{
		if (find(res.begin(), res.end(), v[i]) == res.end())
		{
			res.pb(v[i]);
		}
	}

	for(auto it: res)
	{
		cout << it << " ";
	}
	cout << '\n';
	

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}