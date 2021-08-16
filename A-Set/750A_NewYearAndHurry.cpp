#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, k, sum = 0, rem = 240, count = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; ++i)
	{
		if (rem -5*i >= k)
		{
			rem -= 5*i;
			count++;
		} else {
			break;
		}
		
	}
	cout << count;

return 0;
}