#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll n, k, minA, minB, count = 0; cin >> n;
	vector<int> a, b;

	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		a.pb(k);
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		b.pb(k);
	}

	minA = *min_element(a.begin(), a.end());
	minB = *min_element(b.begin(), b.end());

	for (int i = 0; i < n; ++i)
	{
		if (a[i] > minA)
		{
			if (b[i] > minB)
			{
				if (a[i]-minA > b[i]-minB)
				{
					count+= a[i]-minA;
				} else 
				{
					count += b[i]-minB;
				}
			} else 
			{
				count+= a[i]-minA;
			}

		} else 
		{
			if (b[i] > minB)
			{
				count += b[i]-minB;
			}
		}
	}

	cout << count << '\n';

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}