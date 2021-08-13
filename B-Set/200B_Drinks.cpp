#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{	
	int n, k;
	cin >> n;
	double res = 0.0f;

	for (int i = 0; i < n; ++i)
	{
		cin >> k;

		res += k;
	}
	res /= n;
	cout << setprecision(10) << res;

	return 0;
}