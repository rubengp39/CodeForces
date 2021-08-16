#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, a, b, c, ans = 0;
	cin >> n >> a >> b >> c;

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= n; ++j)
		{
			int kc = n - (i*a + j*b);
			if (kc < 0) break;
			double k = (kc / (double)c);
			if (k == int(k))
			{
				ans = max(ans, (int) k + j + i);
			}
			
		}
	}
	cout << ans ;
	/*for (int i = 0; i < v.size()-1; ++i)
	{
		sum = v[i];

		for (int j = i+1; j < v.size(); ++j)
		{
			if (sum < n)
			{
				sum += v[j];
				cont++;
			} else {
				cont = 1;
				break;
			}
			if (max < cont)
			{
				max = cont;
			}
		}

	}



cout << max;
*/ // ERROR TEST 5 
return 0;
}