#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int n;
	cin >> n;
	string str;
	vector<int> v;
	bool isEasy = true;

	for (int i = 1; i < n; ++i)
	{
		if (i %2 == 0)
		{
			str += "I love that ";
		} else {
			str += "I hate that ";
		}
	}
	
	if (n %2 == 0)
		{
			str += "I love it";
		} else {
			str += "I hate it";
		}

	cout << str;

	return 0;
}