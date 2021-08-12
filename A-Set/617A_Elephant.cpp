#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sol(int b){
	int sol = 0;
	for (int i = 5; i > 0; --i)
	{
		if (b/i >=1)
		{
			b -=i;
			sol++;
			i++;
		}
		
	}

	return sol;
}

int main()
{
	int x, a;
	cin >> x;

	a = sol(x);
	cout << a;
	return 0;
}