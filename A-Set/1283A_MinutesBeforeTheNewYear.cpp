#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int h, m, rem = 0; cin >> h >>m;
	if (h < 23)
	{
		rem = (23 - h)*60;
	}
	if (m < 60)
	{
		rem += 60 - m;
	}
	cout << rem << '\n';
}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}