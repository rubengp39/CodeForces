#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, a = 0, b = 0; cin >> n;

	a = n/3;
	b = n/3;
	if (n % 3 == 1)
	{
		a++;
	} else if (n% 3 == 2)
	{
		b++;
	}
	cout << a << " " << b << '\n';
}

int main()
{	
	int t;
	cin >> t;
	while(t--)
		solve();


return 0;
}