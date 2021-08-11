#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
	int x = 0;
	int m;
	cin >> m;
 
	for (int i = 0; i < m; ++i)
	{
		int p,v,t;
		
		cin >> p >> v >> t;
		
		if((p+v+t) >1)
		{
			x++;
		}
 
	}
	cout << x;
 
	
}