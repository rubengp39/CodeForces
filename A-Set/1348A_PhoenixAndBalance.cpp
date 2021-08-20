#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n; cin >> n;
	vector<int> v;
	for (int i = 1; i <= n; ++i)
	{
		v.pb(pow(2,i));
	}
	int max1 = v[n-1];
	int max2 = v[n-2];

	for (int i = 0; i < (n/2) -1; ++i)
	{
		max1 += v[i];
		max2 += v[i+(n/2)-1];
	}
	cout << abs(max1-max2) << '\n';
}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}