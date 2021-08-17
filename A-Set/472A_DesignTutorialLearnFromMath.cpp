#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{

}

int main()
{	
	/*
	int t;
	cin >> t;
	while(t--)
		solve();
	*/
	
	int n, a, b;
	cin >> n;

	if (n % 2 == 0)
	{
		a = 8;
		b = n - 8;
	} else 
	{
		a = 9;
		b = n - 9;
	}
	cout << a << " "<< b;


return 0;
}