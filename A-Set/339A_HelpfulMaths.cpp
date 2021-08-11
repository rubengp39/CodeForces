#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string a;
	string b;
	cin >> a;

	int n = count(a.begin(), a.end(), '1');
	int m = count(a.begin(), a.end(), '2');
	int p = count(a.begin(), a.end(), '3');

	for (int i = 0; i < n; ++i)
	{
		b += "1+";
	}
	for (int i = 0; i < m; ++i)
	{
		b += "2+";
	}
	for (int i = 0; i < p; ++i)
	{
		b += "3+";
	}
	b.pop_back();
	cout << b;

	
}