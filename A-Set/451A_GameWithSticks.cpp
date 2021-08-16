#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, m;
	ll inters;
	cin >> n >> m;
	inters = n*m;
	if (inters == 1)
	{
		cout << "Akshat";
	} else if (n >= m) 
	{
		if ( m%2 == 0)
		{
			cout << "Malvika";
		} else {
			cout << "Akshat";
		}
		
	} else {
		if ( n%2 == 0)
		{
			cout << "Malvika";
		} else {
			cout << "Akshat";
		}
	}

	

return 0;
}