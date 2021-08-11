#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string a;
	string b;
	cin >> a;
	b = ::toupper(a[0]);
	a[0] = b[0];
	cout << a;
	return 0;
}