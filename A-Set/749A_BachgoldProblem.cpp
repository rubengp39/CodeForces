#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k = 2, tot = 0; cin >> n;


	cout << n/2 << '\n';
	for (int i = 0; i < (n/2)-1; ++i)
		{
			cout << 2 << " ";
		}

	if (n % 2 == 0)
	{
		cout << 2;
	} else 
	{
		cout << 3;
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