#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, a; cin >> n;
	set<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		v.insert(a);
	}
	cout << v.size() << '\n';

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}