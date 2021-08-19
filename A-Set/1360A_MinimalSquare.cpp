#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int a, b, m; cin >> a >> b;
	m = min(a,b)*2;
	if (m >= max(a,b))
	{
		cout << m*m << '\n';
	} else 
	{
		cout << max(a,b)*max(a,b)<< '\n';
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