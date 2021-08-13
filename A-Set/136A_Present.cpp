#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n, k;
	cin >> n;
	vector<int> v(n+1);

	for (int i = 1; i <= n; ++i)
	{
		cin >> k;
		v[k] = i;
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << v[i] << " ";
	}


	return 0;
}