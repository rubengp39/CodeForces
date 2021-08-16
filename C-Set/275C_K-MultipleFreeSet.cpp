#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, k, x, count = 0;
	cin >> n >> k;
	set<int> res;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		v.pb(x);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; ++i)
	{
		if (v[i] % k == 0)
		{
			if (res.find(v[i]/k) ==res.end())
			{
				res.insert(v[i]);
			}
		} else {
			res.insert(v[i]);
		}
	}
	cout << res.size();
return 0;
}