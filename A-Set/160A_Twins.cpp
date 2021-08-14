#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	int k, x, max = 0, sum = 0, count = 0;
	vector <int> v;
	cin >> k;
	
	for (int i = 0; i < k; ++i)
	{
		cin >> x;
		v.pb(x);
	}

	sort(v.begin(), v.end());
	//max = v[k];
	for (int i = 0; i < k; ++i)
	{
		sum += v[i];
	}

	for (int i = k-1; i >=0; --i)
	{
		if (max <= sum/2)
		{
			max += v[i];
			count++;
		}
	}

cout << count;

return 0;
}