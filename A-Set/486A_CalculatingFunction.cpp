#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

/*ll res = 0;

ll f(ll n){

	if (n > 0){
		if (n % 2 == 0)
		{
			res += n;
		} else {
			res -= n;
		}
		f(n-1);

	} else {
		return res;
	}
}
 recursive */
int main()
{
	ll n, k, res = 0;
	cin >> n;
	vector<int> v;
	bool isEasy = true;

	if(n % 2 == 0)
	{
		res = n/2;
	} else {
		res = -(n+1) / 2;
	}

	cout << res;
	/*for (int i = 1; i <=n; ++i)
	{

		//res += pow(-1, i) * i; Timelimit exceeded
		if (i % 2 == 0)
		{
			res += i;
		} else {
			res -= i;
		}
	}
 Timelimit exceeded */

	//cout << f(n);


	return 0;
}