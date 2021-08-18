#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int a, b, c; cin >> a >> b >> c;
	vector<int> v = {a,b,c};
	sort(v.begin(), v.end());
	int hA, hB, hC;
	hA = v[2]- v[0] + v[1] - v[0];
	hB = v[2] - v[1]  + v[1] - v[0];
	hC = v[2] - v[1] + v[2] - v[0];
	cout << min({hA,hB,hC});
}

int main()
{	
	/*int t;
	cin >> t;
	while(t--))
	*/
		solve();


return 0;
}