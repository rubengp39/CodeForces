#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int n, k;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}

return 0;
}