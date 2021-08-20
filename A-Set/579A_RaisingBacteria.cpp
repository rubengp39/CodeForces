#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int a, min = 0; cin >> a;
	
	while(a)
	{
		if(a&1)
		{
			min++;
			a>>=1;
		}
	}
	cout << min;
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}