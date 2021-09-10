#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll n, r, sum = 0, temp;
	cin >> n;
	temp = n;
	while(n > 0)
	{
		r = n%10;
		sum = sum*10 + r;
		n = n/10;
	}

	if(temp == sum)
	{
		cout << "YES" << '\n';
	} else 
	{
		cout << "NO" << '\n';
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