#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int k, n, m, sum = 0, max = 0;
	cin >> k >> n >> m;

	sum = k+n*m;
	if (sum > max)
	{
		max = sum;
	}

	sum = k*(n+m);
	if (sum > max)
	{
		max = sum;
	}
	sum = k*n*m;
	if (sum > max)
	{
		max = sum;
	}
	sum = (k+n)*m;
	if (sum > max)
	{
		max = sum;
	}
	sum = k+n+m;
	if (sum > max)
	{
		max = sum;
	}

	cout << max;

return 0;
}