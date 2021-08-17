#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k, count;
	cin >> n;
	vector<int> v;
	count = n;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size()-1; ++i)
	{
		for (int j = i+1; j < v.size(); ++j)
		{
			if (abs(v[i]-v[j]) <= 1)
			{
				count--;
				break;
			}
		}
	}
	if (count == 1)
	{
		cout<< "YES" << "\n";
	} else {
		cout << "NO"<< "\n";
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