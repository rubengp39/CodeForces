#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int x, n, m; cin >> x >> n >> m;
	while(x > 0 && n && x/2 + 10 < x)
	{
		x = x/2 + 10;
		n--;
	}
	if (x <= m * 10)
	{
		cout << "YES\n";
	} else 
	{
		cout << "NO\n";
	}
	{
		/* code */
	}
	/*int x, n, m; cin >> x >> n >> m;
	bool isD = false, f = false;


	while(!isD)
	{
		if(x/2 + 10 < x)
		{
			if(n > 0)
			{
				x = x/2 + 10;
				n--;

			} else 
			{
				if(m > 0)
				{
					x-= 10;
					m--;
				}
			}
		}
		else 
		{
			if(m > 0)
			{
				x-= 10;
				m--;
			}
		}
	
		if (x <= 0)
		{
			isD = true;
			f = true;
		}
		if ((n== 0) && (m == 0))
		{
			isD = true;
		}
	}

	if(f)
	{
		cout << "YES\n";
	} else 
	{
		cout << "NO\n";
	}
	*/ // TLE
}	

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}