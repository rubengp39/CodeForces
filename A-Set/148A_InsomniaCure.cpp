#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int k, l, m, n, d, count = 0;
	cin >> k >> l >> m >> n >> d;
	vector<int> v;

	for (int i = 1; i <= d; ++i)
	{
		if (i % k == 0 || i % l == 0 ||i % m == 0|| i % n == 0)
		{
			count++;
		}
	}
	cout << count;

return 0;
}