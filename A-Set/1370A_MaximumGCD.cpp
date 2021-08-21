#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n; cin >> n;
	cout << n/2 << '\n';

	// Al ser dos numeros distintos el maximo comun divisor n tiene que ser mayor que max(mcd)
	// y el proximo numero max(mcd) es 2* max(mcd). Estos numeros tienen que ser menor o igual que n por lo tanto
	// 2* max(mcd) <= n o max(mcd) <= n/2
	/*
	int n, max = 0, gcd; cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		for (int j = i+1; j <= n; ++j)
		{
			gcd = __gcd(i,j);
			if (max < gcd)
			{
				max = gcd;
			}
		}
	}
	cout << max << '\n';
*/ // TIME LIMIT EXCEEDED

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}