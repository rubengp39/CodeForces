#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, sumP, sumI;
	cin >> n;
	vector<int> par, impar;
	n;
	if (n/2 % 2 == 0)
	{
		cout << "YES" << '\n';
		for (int i = 2; i <= n; i+=2)
		{
			par.pb(i);
		}
		for (int i = 1; i <= n-1; i+=2)
		{
			impar.pb(i);
		}
		
		sumP = accumulate(par.begin(), par.end(), 0);
		sumI = accumulate(impar.begin(), impar.end(), 0);
		impar[n/2-1] += sumP - sumI;
		par.insert(par.end(),impar.begin(), impar.end());
		
		for (int i = 0; i < par.size(); ++i)
		{
			cout << par[i] << " ";
		}
		cout << "\n";

	} else {
		cout << "NO" << '\n';
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