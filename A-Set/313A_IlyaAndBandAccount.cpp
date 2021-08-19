#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
const int INFINITE = 10000000;

void solve()
{
	int n, l1, l2; cin >> n;
	string str = to_string(abs(n));
	
	if (n < 0)
	{
		l1 =str[str.size()-1] - '0';
		l2 = str[str.size()-2] - '0';
		if (l1 > l2)
		{
			str.erase(str.end()-1);
		} else 
		{
			str.erase(str.end()-2);
		}
		if (str == "0")
		{
			cout << str;
		} else 
		{

		cout << "-" << str;
		}

	} else 
	{
		cout << n;
	}
	

}

int main()
{	
	/*int t;
	cin >> t;
	while(t--) */
		solve();

return 0;
}