#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int n, k, max = 0, cont = 1;
	vector<int> v;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}

	for (int i = 0; i < n-1; ++i)
	{

		if (v[i] <= v[i+1])
		{
			cont++;
		} else {
			cont = 1;
		}

		if (max < cont)
		{
			max = cont;
		}
		
	}
	if (n == 1)
	{
		max = 1;
	}
	cout << max;

return 0;
}