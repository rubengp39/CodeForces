#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, m, a, b, tot;
	cin >> n >> m >> a >> b;
	double special = (n/m)*b;
	double max = n*a;
	double diff = n - (n / m);

	if (max > special)
	{
		if (n % m == 0)
		{
		 tot= special;
		} else 
		{
			if (a >= b)
			{

				tot= special+b;
			} else 
			{
				if (b-a > a)
				{
					tot = special + b-a;
				} else 
				{
					tot = special + a;
				}
				
			}
		}
	} else {
		tot= n*a;
	}

	if (m >= n && b < max)
	{
		tot = b;
	}
	 
	cout << tot;	
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--))
	*/
		solve();


return 0;
}