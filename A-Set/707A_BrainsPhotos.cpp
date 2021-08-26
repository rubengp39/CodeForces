#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, m; cin >> n >> m;
	char c;
	string w = "WBG";
	bool b = true;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> c;
			if (c == 'C' || c == 'M' || c == 'Y')
			{
				b = false;
				break;
			}
		}
	}

	if(b)
	{
		cout << "#Black&White";
	} else 
	{
		cout << "#Color";
	}

}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}