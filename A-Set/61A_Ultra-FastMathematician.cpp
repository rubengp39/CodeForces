#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{	
	string a, b, res;
	bool isEasy = true;

	cin >> a >> b;

	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] == b[i])
		{
			res += '0';
		} else {
			res += '1';
		}
	}

	cout << res;

	return 0;
}