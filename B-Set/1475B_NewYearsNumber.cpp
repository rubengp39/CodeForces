#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, c2020, c2021; cin >> n;

	c2021 = n % 2020;
    c2020 = (n - c2021) / 2020 - c2021;
    if (c2020 >= 0 && 2020 * c2020 + 2021 * c2021 == n) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
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