#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int x, sum = 0, max = 0;
	cin >> x;

	for (int i = 0; i < x; ++i)
	{
		int a, b;
		cin >> a >> b;
		sum += -a + b;

		if (sum > max)
		{
			max = sum;
		}
	}
	cout << max;
	return 0;
}