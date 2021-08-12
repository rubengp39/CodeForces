#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string a;
	int res = 0;
	cin >> a;
	
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] == '4' || a[i] == '7')
		{
			res++;
		}
	}
	if (res == 4 ||res ==7){
		cout << "YES" << '\n';
	} else {
		cout << "NO" << '\n';
	}

	return 0;
}