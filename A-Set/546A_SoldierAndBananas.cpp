#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int k, n , w, o = 0, sum = 0;
	cin >> k >> n >> w;
	for (int i = 1; i < w+1; ++i)
	{
		sum += i*k;
		
	}
	if (n < sum)
	{
		o = sum-n;
	}
	cout << o << "\n";

	return 0;
}