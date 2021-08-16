#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n, m, count = 0;
	cin >> n >> m;
	string aux = "";
	vector<string> v;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (i % 2 == 0)
			{
				aux = aux + "#";
				
			} else {

				aux = aux + ".";
				
			}
			
		}
		v.pb(aux);
		aux = "";
	}
	for (int i = 1; i < v.size(); i+=2)
	{
		
		if (count % 2 == 0)
		{
			v[i][m-1] = '#';
		} else {
			v[i][0] = '#';
		}
		count++;
	}
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << '\n';
	}

return 0;
}