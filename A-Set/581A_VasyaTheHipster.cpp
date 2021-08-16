#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int a, b, dist = 0, same = 0;
	cin >> a >> b;
	while(a > 0 && b > 0)
	{
		dist++;
		a--;
		b--;
	}
	if (a <= 0)
	{
		same = b/2;
	}

	if (b <= 0)
	{
		same = a/2;
	}
	cout << dist << " " << same;
return 0;
}