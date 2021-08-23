#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n,k, count1 = 0, count2 = 0; cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		if (k == 1)
		{
			count1++;
		} else
		{
			count2++;
		}
	}
	int tot = count1 + 2* count2;
	if (tot % 2)
	{
		cout << "NO" << '\n';
		
	} else {
		tot /=2;
		if(tot % 2 == 0 ||  (tot%2 && count1 != 0))
		{
		cout << "YES" << '\n';
		} else {
			cout << "NO" << '\n';
		}
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