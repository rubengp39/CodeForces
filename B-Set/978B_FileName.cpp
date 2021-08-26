#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, count = 1, res = 0; cin >> n;
	string str; cin >> str;

	for (int i = 0; i < n; ++i)
	{
		if(str[i] == 'x' && str[i+1] == 'x')
		{
			count++;
				
		} else if(str[i] == 'x')
		{
			if(count >= 3)
			{
				res += count -2;
			}
			count = 1;
		}
		
		
		
	}

	if(res < 0)
	{
		cout << 0;
	}
	 else
	 {
	 	cout << res;
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