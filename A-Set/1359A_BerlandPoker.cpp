#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, m, k, h1, h2; cin >> n >> m >> k;
	int max = n / k;
	
	h1 = min(m, max);
	h2 = (m - h1 + k -2) / (k-1);
	
	cout << h1-h2 << '\n';
	



}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}