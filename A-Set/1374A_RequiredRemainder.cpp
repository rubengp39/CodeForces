#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int x, y, n; cin >> x >> y >> n;

	if (n - n % x + y <= n) {
			cout << n - n % x + y << '\n';
		} else {
			cout << n - n % x - (x - y) << '\n';
		}
/*
	for (int i = n; i >=0; --i)
	{
		if (i % x == y)
		{
			cout << i << '\n';
			break;
		}
	}
*/ // TimeLimit Exceeded

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}