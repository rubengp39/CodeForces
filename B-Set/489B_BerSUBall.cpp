#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int nb, b, ng, g, count = 0; cin >> nb;
	vector<int> vB, vG;
	for (int i = 0; i < nb; ++i)
	{
		cin >> b;
		vB.pb(b);
	}
	cin >> ng;
	for (int i = 0; i < ng; ++i)
	{
		cin >> g;
		vG.pb(g);
	}
	sort(vB.begin(), vB.end());
	sort(vG.begin(), vG.end());


	for (int i = 0; i < nb; ++i)
	{
		for (int j = 0; j < ng; ++j)
		{
			if (abs(vB[i] - vG[j]) <= 1 )
			{
				vG[j] = 1000;
				count++;
				break;
			}
		}
	}

	cout << count;
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}