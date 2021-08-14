#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int n, m, k, l;
	cin >>n >> m;
	vector<int> v;
	for (int i = 0; i < m; ++i)
	{
		cin>> k;
		v.pb(k);
	}
	sort(v.begin(), v.end());

	l = v[n-1]-v[0];
	for (int i = 1; i <= m-n; ++i)
	{
		if(v[i+n-1]-v[i] < l)
		{
			l = v[i+n-1]-v[i];
		}
	}

	cout << l;

return 0;
}