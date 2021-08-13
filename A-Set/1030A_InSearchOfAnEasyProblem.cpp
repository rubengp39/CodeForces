#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n, k, res = 1;
	cin >> n;
	vector<int> v;
	bool isEasy = true;

	for (int i = 0; i <n; ++i)
	{
		cin >> k;
		if (k == 1)
		{
			isEasy = false;
		}
	}

	if (!isEasy)
		{
			cout << "HARD" << '\n';
			
		} else {
			cout << "EASY" << '\n';
	}

	return 0;
}