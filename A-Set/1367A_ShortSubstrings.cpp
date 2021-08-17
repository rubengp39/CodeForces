#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	string a, b;
	cin >> b;
	if (b.size() == 2)
	{
		a = b;
	} else {
		for (int i = 0; i < b.size(); i+=2)
		{
			a += b[i];
		}
		a += b[b.size()-1];
	}
	cout << a << "\n";
}

int main()
{	
	int t;
	cin >> t;
	while(t--)
		solve();


return 0;
}