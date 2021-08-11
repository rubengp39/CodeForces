#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int m;
	int k = 0;
	string a;
	
	cin >> m;
	cin >> a;

	for (int i = 0; i < m-1; ++i)
	{
		for (int j = 1; j < m; ++j)
		{
			if (a[i] == a[j])
			{
				k++;
				
			}
			i++;
		}
	}
	cout << k;

	return 0;
}