#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, a, b, c, res = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;
		if (a % b == 0)
		{
			cout << 0 << '\n';
		} else {
			c = a % b;
			cout << b - c << '\n';
		}
		
	}


	/*for (int i = 0; i < n; ++i)
	{
		cin >> a >> b;

		if (a%b == 0)
		{
			cout << 0 << '\n';
		} else {
			while( a%b != 0)
			{
				a++;
				res++;
			}
			cout << res << '\n';
		}
		res = 0;
	}
// Time limit exceeded 
*/
return 0;
}