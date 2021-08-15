#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, k, e = 0, o = 0, lastEven, lastOdd;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}

	for (int i = 0; i < n; ++i)
	{
		if (v[i] % 2 == 0)
		{
			e++;
			lastEven = i+1;
		} else {
			o++;
			lastOdd = i+1;
		}
	}

	if (e == 1)
	{
		cout << lastEven;
	}
	else {
		cout << lastOdd;
	}
return 0;
}