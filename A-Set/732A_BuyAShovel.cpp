#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{

}

int main()
{	
	/*
	int t;
	cin >> t;
	while(t--)
		solve();
	*/
	int n, r, max = 10;
	cin >> n >> r;

	for (int i = 1; i < max; ++i)
	{
		if (n*i % 10 == 0 || n*i % 10 == r)
		{
			cout << i;
			break;
		}
	}

return 0;
}