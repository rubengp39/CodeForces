#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n, k, p, res = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		
		cin >> k >> p;
		if (p-k >=2)
		{
			res ++;
		}
	}
	
	cout << res;

	return 0;
}