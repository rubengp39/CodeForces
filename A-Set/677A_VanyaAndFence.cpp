#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n, m, res = 0;
	cin >> n >> m;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		if (x > m)
		{
			res += 2;
		}else {
			res++;
		}
	}
	
	cout << res;

	return 0;
}