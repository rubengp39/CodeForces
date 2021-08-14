#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

int main()
{	
	ll n, k, mid;
	cin >> n >> k;

	mid = n/2;
	if(n%2 != 0){
		mid++;
	}
	if (k <= mid)
	{
		cout << 2*k-1;
	} else {
		cout << (k-mid)*2;
	}
	/*vector<int> v;

	for (int i = 1; i <= n; ++i)
	{
		if (i % 2 != 0)
		{
			v.pb(i);
		}
	}
	for (int i = 1; i <= n; ++i)
	{
		if(i % 2 == 0)
		{
			v.pb(i);
		}
	}

cout << v[k-1];
//Memory limit exceeded 
*/ 

return 0;
}