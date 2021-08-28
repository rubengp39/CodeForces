#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, count = 0, ans = 0; cin >> n;
	string str; cin >> str;
	for (int i = 0; i < n; ++i)
	{
		if(str[i] == '(')
		{
			count++;
		} else 
		{
			count--;
			if(count < 0)
			{
				count = 0;
				ans++;
			}
		}
	}
	cout << ans << '\n';

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}