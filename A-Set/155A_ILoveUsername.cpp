#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, k, max = -1, min = INFINITE, cMax = 0, cMin = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		if (k > max)
		{
			max = k;
			cMax++;
		}
		if (k < min)
		{
			min = k;
			cMin++;
		}
	}
	int tot = cMin + cMax -2;
	if (tot < 0)
	{
		tot = 0;
	}
	cout << tot;
return 0;
}