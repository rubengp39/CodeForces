#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n; cin >> n;
	if (n%2)
	{
		cout << (n/2)+1 << '\n';
	} else 
	{
		cout << n/2 << '\n';
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