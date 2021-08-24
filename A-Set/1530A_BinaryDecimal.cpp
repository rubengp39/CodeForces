#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int max = 0;
	string str; cin >> str;
	for(auto it:str)
	{
		if (it - '0' > max)
		{
			max = it- '0';
		}
	}
	cout << max << '\n';
}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}