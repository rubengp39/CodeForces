#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n, k, res = 1;
	cin >> n;
	vector<int> v;

	for (int i = 0; i <n; ++i)
	{
		cin >> k;
		v.push_back(k);
	}

	for (int i = 0; i < n-1; ++i)
	{
		if (v[i] != v[i+1])
		{
			res++;
		}
	}
	cout << res;

	return 0;
}