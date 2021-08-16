#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int s, n, x, y, count = 0;
	pair<int, int> v[1000];
	cin >> s >> n;
	for (int i = 0; i < n; ++i)
	{
		cin>> x >> y;
		v[i].first = x;
		v[i].second = y;
	}
	sort(v,v+n);



	for (int i = 0; i < n; i++)
	{
		if (s<= v[i].first)
		{
			count++;
		} else {
			s += v[i].second;
		}
	}
	if (count > 0)
	{
		cout << "NO";
	} else {
		cout << "YES";
	}



return 0;
}