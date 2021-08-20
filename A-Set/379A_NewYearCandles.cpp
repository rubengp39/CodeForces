#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int a, b, count = 0, count1 = 0; cin >> a >> b;

	while(a--)
	{
		count++;
		count1++;
		if (count1 == b)
		{
			a++;
			count1 = 0;
		}
	}
	cout << count ;
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}