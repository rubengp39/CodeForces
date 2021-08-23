#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, count = 0; cin >> n;
	string e, a;
	vector<int> v(n,0);
	cin >> e >> a;

	for (int i = 0; i < n; ++i)
	{
		if(a[i] == '1')
		{
			if(i == 0)
			{
				if(e[i] == '0')
				{
					count++;
					continue;
				}
				if(e[i+1] == '1')
				{
					count++;
					v[i+1] = 1;
					continue;
				}

			} else if (i < n-1)
			{
				if(e[i-1] == '1' && v[i-1] != 1)
				{
					count++;
					v[i-1] = 1;
					continue;
				}
				if(e[i] == '0')
				{
					count++;
					continue;
				}
				if (e[i+1] == '1' && v[i+1] != 1)
				{
					count++;
					v[i+1] = 1;
					continue;
				}
			} else
			{
				if(e[i] == '0')
				{
					count++;
					continue;
				}
				if (e[i-1] == '1' && v[i-1]!= 1)
				{
					count++;
					continue;
				}

			}
		}
		
	}
		cout << count << '\n';
	
}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}