#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k, a, cont = 0, tot = 0; cin >> n >> k;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		if (a <= 5-k)
		{
			cont++;
		}
	}

	tot = cont/3;
	cout << tot;
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--))
	*/
		solve();


return 0;
}