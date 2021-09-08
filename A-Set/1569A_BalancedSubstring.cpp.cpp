#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n; cin >> n;
	string str; cin >> str;
	bool f = false;
	int a = count(str.begin(), str.end(), 'a');
	int b = count(str.begin(), str.end(), 'b');

	if(a == b)
	{
		cout << "1 " << n << '\n';
	} else 
	{
		a = 0;
		b = 0;
		for (int i = 0; i < n-1; ++i)
		{
			if(str[i] != str[i+1])
			{
				cout << i+1 << ' ' << i+2 << '\n';
				f = true;
				break;
			}
		}
		if (!f)
		{
			cout << "-1 -1" << '\n';
		}
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