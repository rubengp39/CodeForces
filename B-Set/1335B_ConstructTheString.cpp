#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, a, b; cin >> n >> a >> b;
	string str = "";
	char c = 'a';
	int l = n/b;
	if (n % b)
	{
		l++;
	}
	for (int i = 0; i < l ; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			if (str.size() < n)
			{
				str += c+j;
			}
			
		}
	}
	cout << str << '\n';
}	

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}