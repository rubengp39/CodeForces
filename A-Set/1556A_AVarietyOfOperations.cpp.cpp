#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int a = 0, b = 0, c, d, count = 0; cin >>c >> d;
	int m = c + d /2;

	if( (c+d) %2 != 0)
	{
		count = -1;
	} else
	{
		if(c == d && c!= 0)
		{
			count++;
		} else if (c!= d)
		{
			count = 2;
		}
	}
	cout << count << '\n';


}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}