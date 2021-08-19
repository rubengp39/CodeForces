#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k, countA = 0, countB = 0; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}

	for (int i = 0; i < n; ++i)
	{
		if (i % 2 != v[i] % 2)
		{
			if (i % 2 == 0)
			{
				countA++;
			} else 
			{
				countB++;
			}
		}
	}

	if (countA == countB)
	{
		cout << countA << '\n';
	} else 
	{
		cout << -1 << '\n';
	}

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}