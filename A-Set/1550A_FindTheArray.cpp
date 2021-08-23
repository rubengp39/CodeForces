#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, i= 1; cin >> n;
	
	while(pow(i,2) < n)
	{
		i++;
	}

	cout << i << '\n';
	
}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}