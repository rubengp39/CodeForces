#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	ll m, n, k, res = 0;
	cin >> m >> n >> k;
	if (m % k == 0)
	{
		m = m/k;
	} else {
		m = (m/k) + 1;
	}

	if (n%k == 0)
	{
		n = n/k;
	}else {
		n = (n/k)+1;
	}
	res = m*n;

	cout << res;
return 0;
}