#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, a, b,aC = 0, bC = 0; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		if (a > b)
		{
			aC++;
		} else if (a < b)
		{
			bC++;
		}
	}
	if (aC > bC)
	{
		cout << "Mishka";
	} else if (bC > aC)
	{
		cout << "Chris";
	} else 
	{
		cout << "Friendship is magic!^^";
	}
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}