#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll n; cin >> n;

	for (int i = 2; i < 30; ++i)
	{
		int res = pow(2, i) -1;
		if (n % res == 0)
		{
			cout << n / res << '\n';
			break;
		}
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