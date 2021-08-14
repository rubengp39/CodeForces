#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int n, k;
	bool isZero = true;
	cin >> n;
	vector<int> res = {0,0,0}, a;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			cin >> k;
			a.pb(k);
			res[j] += a[j];
		}
		a.clear();
	}

	for (int i = 0; i < 3; ++i)
	{
		if (res[i] != 0)
		{
			isZero = false;
			break;
		}
	}

	if(isZero)
	{
		cout << "YES" << '\n';
			
	} else {
		cout << "NO" << '\n';
	}

	return 0;
}