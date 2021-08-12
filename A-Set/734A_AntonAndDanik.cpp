#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int a, x = 0, y = 0;
	string b;
	cin >> a >> b;

	for (int i = 0; i < a; ++i)
	{
		if (b[i] == 'A')
		{
			x++;
		} else {
			y++;
		}
	}

	if (x>y)
	{
		cout << "Anton" << '\n';
	} else if (x < y)
	{
		cout << "Danik" << '\n';
	} else {
		cout << "Friendship" << '\n';
	}

	return 0;
}