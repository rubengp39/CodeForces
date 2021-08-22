#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, k, count = 0; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		cin >> k;
		v.pb(k);
	}

	for(int i = 0; i < v.size(); ++i)
    {
        for(int j = 0; j < v.size(); ++j)
        {
            if(v[i] == v[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << i+1 << '\n';
        }
        count = 0;
    }

}

int main()
{	
	int t;
	cin >> t;
	while(t--) 
		solve();

return 0;
}