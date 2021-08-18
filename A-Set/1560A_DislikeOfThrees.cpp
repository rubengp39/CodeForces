#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;
 
void solve()
{
	int k, count = 0; cin >> k;
	string itos;
	char c;
	vector<int> v, aux;
	for (int i = 1; i <= 2000; ++i)
	{
		v.pb(i);
	}
 
	for (int i = 0; i < v.size(); ++i)
	{
		itos = to_string(v[i]);
		c = itos[itos.size()-1];
 
		if (v[i] % 3 == 0 || c == '3')
		{
			
		} else 
		{
			aux.pb(v[i]);
		}
	}
		
	cout << aux[k-1] << '\n';
	
}
 
int main()
{	
	int t;
	cin >> t;
	while(t--)
		solve();
 
 
return 0;
}