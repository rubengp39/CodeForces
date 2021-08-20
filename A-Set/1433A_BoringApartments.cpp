#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	string str; cin >> str;
	int n = (int)str[0] - '0', sum;

	for (int i = 1; i <= 9; ++i)
	{
		if (n == i)
		{
			sum = (i-1)*10;
		}
	}
	for (int i = 1; i <= str.size(); ++i)
	{
		sum += i;
	}
	cout << sum << '\n';

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}