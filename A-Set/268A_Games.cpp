#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, k, count = 0;
	cin >> n;
	vector<int> v;

	for (int i = 0; i < n*2; ++i)
	{
		cin >> k;
		v.pb(k);
	}

	for (int i = 0; i < n*2 -1; i+=2)
	{
		for (int j = 1; j < n*2; j+=2)
		{
			if (v[i] == v[j])
			{
				count++;
			}
		}
	}
	cout << count;
return 0;
}