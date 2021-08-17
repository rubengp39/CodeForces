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
	
	int n, k, curr = 0, count = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		if (k == -1)
		{
			if (curr > 0)
			{
				curr--;
			} else 
			{
				count++;
			}
		} else {
			curr +=k;
		}

	}
	cout << count;


return 0;
}