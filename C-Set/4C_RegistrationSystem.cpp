#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

int main()
{	
	int n;
	cin >> n;
	string str;
	map<string, int> reg;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		if (reg[str] ==0 )
		{
			reg[str] = 1;
			cout << "OK" << '\n';
		} else {
			cout << str << reg[str] << '\n';
			reg[str]++;
		}
	}
	/*int n, count = 1;
	cin >> n;
	string str;
	vector<string> v, res;
	bool isOk = false;
	for (int i = 0; i < n; ++i)
	{
		cin >> str;
		v.pb(str);
		res.pb("OK");
	}

	for (int i = 0; i < n-1; ++i)
	{
		
		for (int j = i+1; j < n; ++j)
		{
			if (v[j] == v[i])
			{
				if (res[j] == "OK")
				{
					res[j] = v[j] + to_string(count);
				}
				
				count++;
			}
						
		}
		count = 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << res[i] << '\n';
	}
*/
//Time limit exceeded
return 0;
}