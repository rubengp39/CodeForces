#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, m, k;
	ll sum = 0;
	cin >> n >> m;
	vector<int> v;
	for (int i = 0; i < m; ++i)
	{
		cin >> k;
		v.pb(k);
	}

	for (int i = 0; i < m; ++i)
	{
		if (sum == 0)
		{
			sum += v[i]-1;
				
			
		} else if (v[i-1] > v[i]){
			sum += n-v[i-1] + v[i];
				
			
		} else {
			sum += v[i] - v[i-1];
				
			
		}
	}

	cout << sum;

return 0;
}