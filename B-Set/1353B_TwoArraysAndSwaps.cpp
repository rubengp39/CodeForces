#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k, a; cin >> n >> k;
	vector<int> vA, vB;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		vA.pb(a);
	}

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		vB.pb(a);
	}
	
	sort(vA.begin(), vA.end());
	sort(vB.begin(), vB.end());
	//int totA = accumulate(vA.begin(), vA.end(), 0);
	//int totB = accumulate(vB.begin(), vB.end(), 0);

	for (int i = 1; i <= k; ++i)
	{
		
		if (vA[0] < vB[vB.size()-i])
		{
			vA[0] = vB[vB.size()-i];
			sort(vA.begin(), vA.end());
		}
				
	}
	cout << accumulate(vA.begin(), vA.end(), 0) << '\n';
	

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}