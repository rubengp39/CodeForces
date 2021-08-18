#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, t, k, sum = 1; cin >> n >> t;
	bool reached = false;
	vector<int> v;
	for (int i = 1; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}
	for (int i = 1; i <= v.size()+1 && i <= t; i+= v[i-1])
	{
		if (i == t)
		{
			reached = true;
			break;
		}
	}
	if (reached)
	{
		cout << "YES";
	} else 
	{
		cout << "NO";
	}
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