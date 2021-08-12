#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string a, b;
	bool isReverse = true;
	cin >> a >> b;

	if (a.size() == b.size()){
		for (int i = 0; i < a.size(); ++i)
		{
			if (a[i] == b[b.size()-1-i])
			{
				
			} else {
			isReverse = false;
		}
		}  

	} else {
		isReverse = false;
	}

	if (isReverse)
	{
		cout << "YES" << '\n';
	} else {
		cout << "NO" << '\n';
	}

	return 0;
}