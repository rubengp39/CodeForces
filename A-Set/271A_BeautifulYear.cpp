#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string str;
	cin >> str;
	int res = stoi(str);
	bool b = false;

	while(!b)
	{
		res++;
		string a = to_string(res);
		sort(a.begin(),a.end());
		b = unique(a.begin(), a.end()) == a.end();
	}
	
	cout << res;

	return 0;
}