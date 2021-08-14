#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, k, pos1 = 0, pos2 = 0, tot = 0;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}
	int max = v[0];
	int min = INFINITE;

	for (int i = 1; i < n; ++i)
	{
		if (max < v[i])
		{
			max = v[i];
			pos1 = i;
		}
	}
	tot = pos1;

	for (int i = n-1; i >= 0; --i)
	{
		if (min > v[i])
		{
			min = v[i];
			pos2 = i;
		}
	}

	if (pos2 <= n)
	{
		if (pos1 > pos2)
	{
		tot += (n-2) - pos2;
	} else {
		tot += (n-1) - pos2;
		
	}
	} else {
		tot += 0;
	}
	

	cout << tot;

return 0;
}