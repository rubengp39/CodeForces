#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	string str;
	double n, res = 0;
	vector<double> v;
	cin >> str;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] != '0')
		{
			res++;
			v.pb((double)((str[i])-'0') * pow(10,str.size()-(i+1)));
		}
	}
	cout << res << '\n';
	for (int i = 0; i < v.size(); ++i)
	 {
	 	cout << v[i] << " ";
	 } 
	 cout << "\n";
}

int main()
{	
	int t;
	cin >> t;
	while(t--)
		solve();
return 0;
}