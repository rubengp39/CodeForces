#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, m; cin >> n >> m;

	if(m < n *2)
	{
		cout << m - n << '\n';
	} else 
	{
		cout << (m - 1) / 2 << '\n';
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