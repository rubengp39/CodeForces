#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int n = 4, k, res;
	vector<int> v;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
		
	}
	set<int> s(v.begin(), v.end());
	res = v.size() - s.size();

	cout << res;
	return 0;
}