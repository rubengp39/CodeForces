#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{

}

int main()
{	
	/*
	int t;
	cin >> t;
	while(t--)
		solve();
	*/
	
	int k;
	vector<int> v;
	for (int i = 0; i < 4; ++i)
	{
		cin >> k;
		v.pb(k);
	}
	sort(v.begin(), v.end());

	cout << v[3] - v[0] << " " << v[3] - v[1] << " " << v[3] - v[2];


return 0;
}