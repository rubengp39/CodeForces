#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n; cin >>n;
	string str; cin >> str;
	for (char c = 'A'; c <= 'Z'; ++c)
	{
		int f = n;
		int l = -1;

		for (int i = 0; i < n; ++i)
		{
			if(str[i] == c)
			{
				f = min(f,i);
				l = max(l,i);
			}
		}
		for (int i = f; i <= l; ++i)
		{
			if(str[i] != c)
			{
				cout << "NO" << '\n';
				return;
			}
		}
	}
	cout << "YES" << '\n';
}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}