#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, count = 0; cin >> n;
	bool l = true;
	while (l)
	{
		if (n % 6 == 0)
		{
			n /= 6;
			count++;
		} else if (n % 3 == 0)
		{
			n *=2;
			count++;
		}
		else
		{
			l = false;
		}	
	}
	if (n == 1)
	{
		cout << count << '\n';
	} else 
	{
		cout << -1 << '\n';
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