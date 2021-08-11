#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
 
	int m;
	cin >> m;
 
	for (int i = 0; i < m; ++i)
	{
		string n;
		cin >> n;
		int l = n.length();
		string s;
 
		if(l > 10)
		{
			s = n[0] + to_string(l - 2) + n[l-1];
			cout << s << '\n';
		} else {
			cout << n << '\n';
		}
	}
 
	
}