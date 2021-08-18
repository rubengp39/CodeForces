#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	ll a, b, c; cin >> a >> b >> c;
	ll num = abs(a-b);

	if (max({a,b,c}) <= 2*num )
	{
		if (c > num)
		{
			cout<< c-num<< '\n';
		}
		else {
			cout << c+num << '\n';
		}
	} else
	{
		cout << -1 << '\n';
	}



}

int main()
{	
	int t;
	cin >> t;
	while(t--)
		solve();


return 0;
}