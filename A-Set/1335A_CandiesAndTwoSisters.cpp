#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int t;
	ll n, a , b;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin>> n;
		if (n % 2 == 0)
		{
			cout << (n/2) -1 << '\n'; 
		} else {
			cout << (n/2)  << '\n'; 
		}
		
	}
return 0;
}